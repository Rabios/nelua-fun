NELUA=nelua
CC=gcc
NFLAGS=--cc=$(CC) -L..
NELUARUN=$(NELUA) $(NFLAGS)

NELUA=nelua
CC=gcc
NFLAGS=--cc=$(CC) -L..
NELUARUN=$(NELUA) $(NFLAGS)

test:
	$(NELUARUN) --shared-lib ffi_module.nelua -o ffi_module
	$(NELUARUN) ffi_test.nelua
