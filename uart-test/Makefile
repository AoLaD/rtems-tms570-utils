ARCH = arm-rtems4.11
CC = $(ARCH)-gcc
LD = $(ARCH)-ld
AS = $(ARCH)-gcc-as
AR = $(ARCH)-gcc-ar
NM = $(ARCH)-gcc-nm

LINKCMDS = linkcmds.tms570ls3137_hdk_sdram
#LINKCMDS = linkcmds.tms570ls3137_hdk_intram

CPU_CFLAGS = -march=armv7-r -mthumb -mbig-endian
CFLAGS = $(CPU_CFLAGS) -ggdb -Wall
LDFLAGS = $(CPU_CFLAGS) -L . -ggdb -nostartfiles
CPPFLAGS = -I .
LDFLAGS += -Wl,-T,$(LINKCMDS)

LDFLAGS += -Wl,-Map,$@.map

all: uart-test

uart-test: uart-test.o system_stub.o

clean:
	rm -f *.o uart-test *.map


