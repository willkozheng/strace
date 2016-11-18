# strace
基于strace-4.14修改，增加以下功能

## 定时统计系统调用 ##
使用-c参数统计系统调用不足之处在于，统计从strace启动到停止整个生命周期的数据，不够精细化，有时需要向vmstat/mpstat之类的定时输出结果。因此，新增-w n参数，用来指定定时输出时间，单位秒。
strace -W 1 -p 12345
------------------------------21:09:25-----------------------------
% time     seconds  usecs/call     calls    errors syscall
------ ----------- ----------- --------- --------- ----------------
 57.34    0.008547          21       398           poll
 19.38    0.002889           6       464       394 recvmsg
 14.99    0.002235          20       112         8 futex
  4.70    0.000701          10        72         1 read
  3.35    0.000499           8        65           writev
  0.16    0.000024           6         4           write
  0.08    0.000012           4         3           clone
------ ----------- ----------- --------- --------- ----------------
100.00    0.014907                  1118       403 total
------------------------------21:09:26-----------------------------
% time     seconds  usecs/call     calls    errors syscall
------ ----------- ----------- --------- --------- ----------------
 45.17    0.013233          39       341        14 futex
 21.28    0.006235           7       878           poll
 20.65    0.006049           5      1246       883 recvmsg
  7.42    0.002173           6       341           writev
  2.58    0.000755          18        41           read
  2.42    0.000708          15        46           write
  0.16    0.000048          24         2           open
  0.13    0.000038          38         1           clone
  0.09    0.000027           9         3           mmap
  0.05    0.000016          16         1           mprotect
  0.04    0.000012           6         2           close
------ ----------- ----------- --------- --------- ----------------
100.00    0.029294                  2902       897 total
------------------------------21:09:27-----------------------------
% time     seconds  usecs/call     calls    errors syscall
------ ----------- ----------- --------- --------- ----------------
 77.40    0.023020          30       777        99 futex
 13.09    0.003894          18       211           write
  3.32    0.000986           4       263           poll
  2.92    0.000869           3       261       248 recvmsg
  1.02    0.000303           7        41         1 read
  0.95    0.000282          35         8           mmap
  0.61    0.000180          36         5           open
  0.46    0.000136           6        21           writev
  0.11    0.000032          32         1           clone
  0.07    0.000021           4         5           close
  0.03    0.000008           8         1           mprotect
  0.02    0.000006           6         1           fstat
  0.02    0.000006           6         1           fcntl
  0.00    0.000000           0         1           munmap
  0.00    0.000000           0         5           getsockname
------ ----------- ----------- --------- --------- ----------------
100.00    0.029743                  1602       348 total