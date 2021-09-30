# nelua-fun

Collection of stuff that i made for [Nelua](https://nelua.io) on my own (WIP)

| Library       | Description                                       |
|---------------|---------------------------------------------------|
| [easings][1]  | Easings library                                   |
| [mathkit][2]  | Vector/Quaternion/Matrices Math library           |
| [xinput][3]   | [XInput][4] bindings (Only runs on Windows)       |
| [ffi][5]      | FFI (Foreign Function Interface) module           |
| [sigil][6]    | [SIGIL][7] bindings                               |
| [tigr][8]     | [TIGR][9] bindings                                |

### Building Tests

Each library has a folder which contains following:

1. Library/Bindings
2. Test file for the Library/Bindings
3. API documentation
4. Makefile

To build test simply `cd` into library's directory and `make test`

[1]: https://github.com/Rabios/nelua-fun/tree/main/easings
[2]: https://github.com/Rabios/nelua-fun/tree/main/mathkit
[3]: https://github.com/Rabios/nelua-fun/tree/main/xinput
[4]: https://docs.microsoft.com/en-us/windows/win32/xinput/xinput-game-controller-apis-portal
[5]: https://github.com/Rabios/nelua-fun/tree/main/ffi
[6]: https://github.com/Rabios/nelua-fun/tree/main/sigil
[7]: http://libsigil.com
[8]: https://github.com/Rabios/nelua-fun/tree/main/tigr
[9]: https://github.com/erkkah/tigr

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
