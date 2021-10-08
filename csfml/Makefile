NELUA=nelua
CC=gcc
NFLAGS=--cc=$(CC) -L..
NELUARUN=$(NELUA) $(NFLAGS)

test:
	$(NELUARUN) csfml_test.nelua -o csfml_test --turbo --cflags="-L lib -I include -static"
