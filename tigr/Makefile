CURL=curl
NELUA=nelua
CC=gcc
NFLAGS=--cc=$(CC) -L..
NELUARUN=$(NELUA) $(NFLAGS)

download:
	$(CURL) -LJO -C - https://raw.githubusercontent.com/erkkah/tigr/master/tigr.c --silent
	$(CURL) -LJO -C - https://raw.githubusercontent.com/erkkah/tigr/master/tigr.h --silent

test:
	$(NELUARUN) tigr_test.nelua
    