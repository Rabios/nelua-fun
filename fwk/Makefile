CURL=curl
NELUA=nelua
CC=gcc
NFLAGS=--cc=$(CC) -L..
NELUARUN=$(NELUA) $(NFLAGS)

download:
	$(CURL) -LJO -C - https://raw.githubusercontent.com/r-lyeh/FWK/master/fwk.c --silent
	$(CURL) -LJO -C - https://raw.githubusercontent.com/r-lyeh/FWK/master/fwk.h --silent

test:
	$(NELUARUN) fwk_test.nelua
