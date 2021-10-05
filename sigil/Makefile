NELUA=nelua
CC=gcc
NFLAGS=--cc=$(CC) -L..
NELUARUN=$(NELUA) $(NFLAGS)

test:
	$(NELUARUN) sigil_test.nelua -o sigil_test --turbo --cflags="-L lib -I include -static"
