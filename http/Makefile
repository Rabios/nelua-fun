CURL=curl
NELUA=nelua
CC=gcc
NFLAGS=--cc=$(CC) -L..
NELUARUN=$(NELUA) $(NFLAGS)

download:
	$(CURL) -LJO -C - https://github.com/mattiasgustavsson/libs/raw/main/http.h --silent

test:
	$(NELUARUN) http_test.nelua
