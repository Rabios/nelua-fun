# nelua-fun

Collection of stuff that i made for [Nelua](https://nelua.io) on my own (WIP)

| Library       | Description                                       |
|---------------|---------------------------------------------------|
| [easings][1]  | Easings library                                   |
| [mathkit][2]  | Vector/Quaternion/Matrices Math library           |
| [xinput][3]   | Bindings for [XInput][4], API that enables applications to receive input from the Xbox Controller for Windows. (Only runs on Windows) |
| [ffi][5]      | FFI (Foreign Function Interface) module |
| [sigil][6]    | Bindings for [SIGIL][7], Multimedia Library |
| [tigr][8]     | Bindings for [TIGR][9], Tiny cross-platform graphics library, providing a unified API for Windows, macOS, Linux, iOS and Android. |
| [http][10]    | Bindings for [http.h][11], Basic HTTP protocol implementation over sockets (no https) |
| [fwk][12]     | Bindings for [FWK][13], 3D game framework |
| [ini][14]     | Bindings for [ini.h][15], Simple ini-file reader for C/C++ |
| [csfml][16]   | Bindings for [CSFML][17], official binding of [SFML][18] for the C language |

### Building Tests

Each library has a folder which contains following:

1. Library/Bindings
2. Test file for the Library/Bindings
3. API documentation
4. Makefile

Read `BUILDING.md` file if exists in the library bindings folder, Else do `make test` and run!

[1]: https://github.com/Rabios/nelua-fun/tree/main/easings
[2]: https://github.com/Rabios/nelua-fun/tree/main/mathkit
[3]: https://github.com/Rabios/nelua-fun/tree/main/xinput
[4]: https://docs.microsoft.com/en-us/windows/win32/xinput/xinput-game-controller-apis-portal
[5]: https://github.com/edubart/nelua-batteries/blob/main/ffi.nelua
[6]: https://github.com/Rabios/nelua-fun/tree/main/sigil
[7]: http://libsigil.com
[8]: https://github.com/Rabios/nelua-fun/tree/main/tigr
[9]: https://github.com/erkkah/tigr
[10]: https://github.com/Rabios/nelua-fun/tree/main/http
[11]: https://github.com/mattiasgustavsson/libs/blob/main/http.h
[12]: https://github.com/Rabios/nelua-fun/tree/main/fwk
[13]: https://github.com/r-lyeh/FWK
[14]: https://github.com/Rabios/nelua-fun/tree/main/ini
[15]: https://github.com/mattiasgustavsson/libs/blob/main/ini.h
[16]: https://github.com/Rabios/nelua-fun/tree/main/csfml
[17]: https://www.sfml-dev.org/download/csfml
[18]: https://www.sfml-dev.org

### License

```
This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

For more information, please refer to <http://unlicense.org>
```
