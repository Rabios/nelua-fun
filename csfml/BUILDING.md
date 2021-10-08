# Building

The bindings requires binary distribution of [CSFML](https://www.sfml-dev.org/download/csfml) so:

1. Download the build depending on your platform from downloads there...
2. Create folder named `lib` in this directory.
3. Copy all static libraries from CSFML's `lib` folder into the `lib` folder you created.
4. Create folder named `include` in this directory.
5. Copy CSFML's `SFML` folder from `include` folder into the `include` folder you created.
6. `make test` to compile.
7. Put shared libs that comes with CSFML beside the output executable!
8. Run!
