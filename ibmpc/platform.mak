#
# platform.mak - build target definition
#

CFLAGS_PLATFORM=-DIBMPC -DDBCS
NASMFLAGS_PLATFORM=-DIBMPC -DDBCS -DNO_REVISION
#CFLAGS_PLATFORM=-DNEC98 -DJAPAN -DDBCS
#NASMFLAGS_PLATFORM=-DNEC98 -DJAPAN -DDBCS -DNO_REVISION

ALLCFLAGS=$(ALLCFLAGS) $(CFLAGS_PLATFORM)
NASMFLAGS=$(NASMFLAGS) $(NASMFLAGS_PLATFORM)
