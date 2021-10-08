CURL=curl
NELUA=nelua
CC=gcc
NFLAGS=--cc=$(CC) -L..
NELUARUN=$(NELUA) $(NFLAGS)

download:
	$(CURL) -LJO -C - https://github.com/mattiasgustavsson/libs/raw/main/ini.h --silent

test:
	$(NELUARUN) ini_test.nelua
