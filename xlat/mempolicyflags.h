/* Generated by ./xlat/gen.sh from ./xlat/mempolicyflags.in; do not edit. */
#if !(defined(MPOL_F_NODE) || (defined(HAVE_DECL_MPOL_F_NODE) && HAVE_DECL_MPOL_F_NODE))
# define MPOL_F_NODE 1
#endif
#if !(defined(MPOL_F_ADDR) || (defined(HAVE_DECL_MPOL_F_ADDR) && HAVE_DECL_MPOL_F_ADDR))
# define MPOL_F_ADDR 2
#endif

#ifdef IN_MPERS

# error static const struct xlat mempolicyflags in mpers mode

#else

static
const struct xlat mempolicyflags[] = {
 XLAT(MPOL_F_NODE),
 XLAT(MPOL_F_ADDR),
 XLAT_END
};

#endif /* !IN_MPERS */
