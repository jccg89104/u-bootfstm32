#
# This program may be distributed according to the terms of the GNU
# General Public License, version 2 or (at your option) any later version.
#
# $Id: Makefile.linux,v 1.9 2012/05/04 21:48:00 dgolle Exp $
#***********************************************************************

DESTDIR = $(INSTROOT)/usr
LIBDIR = $(DESTDIR)/lib/pppd/$(PPPDVERSION)

PPPDVERSION = $(shell awk -F '"' '/VERSION/ { print $$2; }' ../../patchlevel.h)

INSTALL	= install

COPTS=-O2 -g
CFLAGS  = $(COPTS) -I. -I../.. -I../../../include -DPPPD_VERSION=\"$(PPPDVERSION)\"

ifeq ($(CONFIG_USER_PPPD_WITH_DYNAMIC_PLUGINS),y)
CFLAGS += -fPIC
TARGET = pptp.so
else
TARGET = libpptp.o
endif

all: $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

pptp.so: dirutil.o orckit_quirks.o pptp.o pptp_callmgr.o pptp_ctrl.o pptp_quirks.o util.o vector.o
	$(CC) -o pptp.so -shared dirutil.o orckit_quirks.o pptp.o pptp_callmgr.o pptp_ctrl.o pptp_quirks.o util.o vector.o

libpptp.o: dirutil.o orckit_quirks.o pptp.o pptp_callmgr.o pptp_ctrl.o pptp_quirks.o util.o vector.o
	$(LD) -r -o $@ $^

install: all
	$(INSTALL) -d -m 755 $(LIBDIR)
	$(INSTALL) -c -m 4550 pptp.so $(LIBDIR)

clean:
	rm -f *.o *.so

