# API

### TPixel

```nelua
global TPixel: type = @record {
  r: cuchar,
  g: cuchar,
  b: cuchar,
  a: cuchar
}
```

This struct contains one pixel.

### TIGR_FIXED

```nelua
global TIGR_FIXED: cint
```

window's bitmap is a fixed size (default)

### TIGR_AUTO

```nelua
global TIGR_AUTO: cint
```

window's bitmap will automatically resize after each tigrUpdat

### TIGR_2X

```nelua
global TIGR_2X: cint
```

always enforce (at least) 2X pixel scale

### TIGR_3X

```nelua
global TIGR_3X: cint
```

always enforce (at least) 3X pixel scale

### TIGR_4X

```nelua
global TIGR_4X: cint
```

always enforce (at least) 4X pixel scale

### TIGR_RETINA

```nelua
global TIGR_RETINA: cint
```

enable retina support on OS X

### TIGR_NOCURSOR

```nelua
global TIGR_NOCURSOR: cint
```

hide cursor

### TIGR_FULLSCREEN

```nelua
global TIGR_FULLSCREEN: cint
```

start in full-screen mode

### Tigr

```nelua
global Tigr: type = @record {
  w: cint, h: cint, -- width/height (unscaled)
  pix: *[0]TPixel,  -- pixel data
  handle: pointer   -- OS window handle, NULL for off-screen bitmaps.
}
```

A Tigr bitmap.

### tigrWindow

```nelua
global function tigrWindow(w: cint, h: cint, title: cstring <const>, flags: cint): *Tigr
```

Creates a new empty window. (title is UTF-8)

### tigrBitmap

```nelua
global function tigrBitmap(w: cint, h: cint): *Tigr
```

Creates an empty off-screen bitmap.

### tigrFree

```nelua
global function tigrFree(bmp: *Tigr): void
```

Deletes a window/bitmap.

### tigrClosed

```nelua
global function tigrClosed(bmp: *Tigr): cint
```

Returns non-zero if the user requested to close a window.

### tigrUpdate

```nelua
global function tigrUpdate(bmp: *Tigr): void
```

Displays a window's contents on-screen.

### tigrBeginOpenGL

```nelua
global function tigrBeginOpenGL(bmp: *Tigr): cint
```

Called before doing direct OpenGL calls and before tigrUpdate.
Returns non-zero if OpenGL is available.

### tigrSetPostShader

```nelua
global function tigrSetPostShader(bmp: *Tigr, code: cstring <const>, size: cint): void
```

Sets post shader for a window.
This replaces the built-in post-FX shader.

### tigrSetPostFX

```nelua
global function tigrSetPostFX(bmp: *Tigr, p1: float32, p2: float32, p3: float32, p4: float32): void
```

Sets post-FX properties for a window.

The built-in post-FX shader uses the following parameters:
  - p1: hblur - use bilinear filtering along the x-axis
  - p2: vblur - use bilinear filtering along the y-axis
  - p3: scanlines - CRT scanlines effect (0-1)
  - p4: contrast - contrast boost (1 = no change, 2 = 2X contrast, etc)

### tigrGet

```nelua
global function tigrGet(bmp: *Tigr, x: cint, y: cint): TPixel
```

Helper for reading/writing pixels.
For high performance, just write to `bmp->pix` yourself.

### tigrPlot

```nelua
global function tigrPlot(bmp: *Tigr, x: cint, y: cint, pix: TPixel): void
```



### tigrClear

```nelua
global function tigrClear(bmp: *Tigr, color: TPixel): void
```

Clears a bitmap to a color.

### tigrFill

```nelua
global function tigrFill(bmp: *Tigr, x: cint, y: cint, w: cint, h: cint, color: TPixel): void
```

Fills in a solid rectangle.

### tigrRect

```nelua
global function tigrRect(bmp: *Tigr, x: cint, y: cint, w: cint, h: cint, color: TPixel): void
```

Draws an empty rectangle. (exclusive co-ords)

### tigrLine

```nelua
global function tigrLine(bmp: *Tigr, x0: cint, y0: cint, x1: cint, y1: cint, color: TPixel): void
```

Draws a line.

### tigrBlit

```nelua
global function tigrBlit(dest: *Tigr, src: *Tigr, dx: cint, dy: cint, sx: cint, sy: cint, w: cint, h: cint, alpha: float32): void
```

Copies bitmap data.
  - `dx`/`dy` = dest co-ordinates
  - `sx`/`sy` = source co-ordinates
  - `w`/`h`   = width/height

### tigrBlitAlpha

```nelua
global function tigrBlitAlpha(dest: *Tigr, src: *Tigr, dx: cint, dy: cint, sx: cint, sy: cint, w: cint, h: cint, alpha: float32): void
```

Same as `tigrBlit`, but blends with the bitmap alpha channel,
and uses the `alpha` variable to fade out.

### tigrBlitTint

```nelua
global function tigrBlitTint(dest: *Tigr, src: *Tigr, dx: cint, dy: cint, sx: cint, sy: cint, w: cint, h: cint, tint: TPixel): void
```

Same as tigrBlit, but tints the source bitmap with a color.

### tigrRGB

```nelua
global function tigrRGB(r: cuchar, g: cuchar, b: cuchar): TPixel
```

Helper for making colors.

### tigrRGBA

```nelua
global function tigrRGBA(r: cuchar, g: cuchar, b: cuchar, a: cuchar): TPixel
```

Helper for making colors.

### TigrGlyph

```nelua
global TigrGlyph: type = @record {
  code: cint,
  x: cint,
  y: cint,
  w: cint,
  h: cint
}
```



### TigrFont

```nelua
global TigrFont: type = @record {
  bitmap: *Tigr,
  numGlyphs: cint,
  glyphs: *[0]TigrGlyph
}
```



### tigrLoadFont

```nelua
global function tigrLoadFont(bitmap: *Tigr, codepage: cint): *TigrFont
```

Loads a font. The font bitmap should contain all characters for the given `codepage`, excluding the first 32 control codes.
Supported codepages: 0 - Regular 7-bit ASCII, 1252 - Windows 1252

### tigrFreeFont

```nelua
global function tigrFreeFont(font: *TigrFont): void
```

Frees a font.

### tigrPrint

```nelua
global function tigrPrint(dest: *Tigr, font: *TigrFont, x: cint, y: cint, color: TPixel, text: cstring <const>, ...: cvarargs): void
```

Prints UTF-8 text onto a bitmap.

### tigrTextWidth

```nelua
global function tigrTextWidth(font: *TigrFont, text: cstring <const>): cint
```

Returns the width of a string.

### tigrTextHeight

```nelua
global function tigrTextHeight(font: *TigrFont, text: cstring <const>): cint
```

Returns the height of a string.

### tfont

```nelua
global tfont: *TigrFont
```

The built-in font.

### TKey

```nelua
global TKey: type = @enum(cint) {
  TK_PAD0=128,TK_PAD1,TK_PAD2,TK_PAD3,TK_PAD4,TK_PAD5,TK_PAD6,TK_PAD7,TK_PAD8,TK_PAD9,
  TK_PADMUL,TK_PADADD,TK_PADENTER,TK_PADSUB,TK_PADDOT,TK_PADDIV,
  TK_F1,TK_F2,TK_F3,TK_F4,TK_F5,TK_F6,TK_F7,TK_F8,TK_F9,TK_F10,TK_F11,TK_F12,
  TK_BACKSPACE,TK_TAB,TK_RETURN,TK_SHIFT,TK_CONTROL,TK_ALT,TK_PAUSE,TK_CAPSLOCK,
  TK_ESCAPE,TK_SPACE,TK_PAGEUP,TK_PAGEDN,TK_END,TK_HOME,TK_LEFT,TK_UP,TK_RIGHT,TK_DOWN,
  TK_INSERT,TK_DELETE,TK_LWIN,TK_RWIN,TK_NUMLOCK,TK_SCROLL,TK_LSHIFT,TK_RSHIFT,
  TK_LCONTROL,TK_RCONTROL,TK_LALT,TK_RALT,TK_SEMICOLON,TK_EQUALS,TK_COMMA,TK_MINUS,
  TK_DOT,TK_SLASH,TK_BACKTICK,TK_LSQUARE,TK_BACKSLASH,TK_RSQUARE,TK_TICK
}
```

Key scancodes. For letters/numbers, use ASCII ('A'-'Z' and '0'-'9').

### tigrMouse

```nelua
global function tigrMouse(bmp: *Tigr, x: *cint, y: *cint, buttons: *[0]cint): void
```

Returns mouse input for a window.

### TigrTouchPoint

```nelua
global TigrTouchPoint: type = @record {
  x: cint,
  y: cint
}
```



### tigrTouch

```nelua
global function tigrTouch(bmp: *Tigr, points: *[0]TigrTouchPoint, maxPoints: cint): cint
```

Reads touch input for a window.
Returns number of touch points read.

### tigrKeyDown

```nelua
global function tigrKeyDown(bmp: *Tigr, key: cint): cint
```

Returns non-zero if a key held.
tigrKeyHeld repeats each frame.

### tigrKeyHeld

```nelua
global function tigrKeyHeld(bmp: *Tigr, key: cint): cint
```

Returns non-zero if a key is pressed.
tigrKeyDown tests for the initial press.

### tigrReadChar

```nelua
global function tigrReadChar(bmp: *Tigr): cint
```

Reads character input for a window.
Returns the Unicode value of the last key pressed, or 0 if none.

### tigrLoadImage

```nelua
global function tigrLoadImage(fileName: cstring <const>): *Tigr
```

Loads a PNG from a file. (`fileName` is UTF-8)
On error, returns `nilptr` and sets `errno`.

### tigrLoadImageMem

```nelua
global function tigrLoadImageMem(data: pointer <const>, length: cint): *Tigr
```

Loads a PNG, from memory.
On error, returns `nilptr` and sets `errno`.

### tigrSaveImage

```nelua
global function tigrSaveImage(fileName: cstring <const>, bmp: *Tigr): cint
```

Saves a PNG to a file. (`fileName` is UTF-8)
On error, returns `0` and sets `errno`.

### tigrTime

```nelua
global function tigrTime(): float32
```

Returns the amount of time elapsed since tigrTime was last called, or zero on the first call.

### tigrError

```nelua
global function tigrError(bmp: *Tigr, message: cstring <const>, ...: cvarargs): void
```

Displays an error message and quits. (UTF-8)
`bmp` can be `nilptr`.

### tigrReadFile

```nelua
global function tigrReadFile(fileName: cstring <const>, length: *cint): void
```

Reads an entire file into memory. (`fileName` is UTF-8)
Free it yourself after with `free`.
On error, returns `nilptr` and sets `errno`.
TIGR will automatically append `\0` to the end (not included in the length)

### tigrInflate

```nelua
global function tigrInflate(out: pointer, outlen: cuint, input: *pointer <const>, inlen: cuint): cint
```

Decompresses DEFLATEd zip/zlib data into a buffer.
Returns non-zero on success.

### tigrDecodeUTF8

```nelua
global function tigrDecodeUTF8(text: cstring <const>, cp: *cint): cstring
```

Encodes a single UTF8 codepoint and returns the next pointer.

### tigrEncodeUTF8

```nelua
global function tigrEncodeUTF8(text: cstring, cp: cint): cstring
```

Encodes a single UTF8 codepoint and returns the next pointer.

---
