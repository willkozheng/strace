/* Generated by ./xlat/gen.sh from ./xlat/usagewho.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat usagewho in mpers mode

#else

static
const struct xlat usagewho[] = {
#if defined(RUSAGE_SELF) || (defined(HAVE_DECL_RUSAGE_SELF) && HAVE_DECL_RUSAGE_SELF)
  XLAT(RUSAGE_SELF),
#endif
#if defined(RUSAGE_CHILDREN) || (defined(HAVE_DECL_RUSAGE_CHILDREN) && HAVE_DECL_RUSAGE_CHILDREN)
  XLAT(RUSAGE_CHILDREN),
#endif
#if defined(RUSAGE_BOTH) || (defined(HAVE_DECL_RUSAGE_BOTH) && HAVE_DECL_RUSAGE_BOTH)
  XLAT(RUSAGE_BOTH),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
