#pragma once

/*
Sound, Input, and Graphics Integration Library (SIGIL) 0.9.0
Geoff Nagy
*/

#ifdef _MSC_VER
	#define SIGIL_API __declspec(dllexport)
#else
	#define SIGIL_API
#endif

// text alignment symbolic constants
#define SL_ALIGN_CENTER 0
#define SL_ALIGN_RIGHT 1
#define SL_ALIGN_LEFT 2

// input key symbolic constants
#define SL_KEY_ESCAPE 256
#define SL_KEY_ENTER 257
#define SL_KEY_TAB 258
#define SL_KEY_BACKSPACE 259
#define SL_KEY_INSERT 260
#define SL_KEY_DELETE 261
#define SL_KEY_RIGHT 262
#define SL_KEY_LEFT 263
#define SL_KEY_DOWN 264
#define SL_KEY_UP 265
#define SL_KEY_PAGE_UP 266
#define SL_KEY_PAGE_DOWN 267
#define SL_KEY_HOME 268
#define SL_KEY_END 269
#define SL_KEY_CAPS_LOCK 280
#define SL_KEY_SCROLL_LOCK 281
#define SL_KEY_NUM_LOCK 282
#define SL_KEY_PRINT_SCREEN 283
#define SL_KEY_PAUSE 284
#define SL_KEY_F1 290
#define SL_KEY_F2 291
#define SL_KEY_F3 292
#define SL_KEY_F4 293
#define SL_KEY_F5 294
#define SL_KEY_F6 295
#define SL_KEY_F7 296
#define SL_KEY_F8 297
#define SL_KEY_F9 298
#define SL_KEY_F10 299
#define SL_KEY_F11 300
#define SL_KEY_F12 301
#define SL_KEY_F13 302
#define SL_KEY_F14 303
#define SL_KEY_F15 304
#define SL_KEY_F16 305
#define SL_KEY_F17 306
#define SL_KEY_F18 307
#define SL_KEY_F19 308
#define SL_KEY_F20 309
#define SL_KEY_F21 310
#define SL_KEY_F22 311
#define SL_KEY_F23 312
#define SL_KEY_F24 313
#define SL_KEY_F25 314
#define SL_KEY_KEYPAD_0 320
#define SL_KEY_KEYPAD_1 321
#define SL_KEY_KEYPAD_2 322
#define SL_KEY_KEYPAD_3 323
#define SL_KEY_KEYPAD_4 324
#define SL_KEY_KEYPAD_5 325
#define SL_KEY_KEYPAD_6 326
#define SL_KEY_KEYPAD_7 327
#define SL_KEY_KEYPAD_8 328
#define SL_KEY_KEYPAD_9 329
#define SL_KEY_KEYPAD_DECIMAL 330
#define SL_KEY_KEYPAD_DIVIDE 331
#define SL_KEY_KEYPAD_MULTIPLY 332
#define SL_KEY_KEYPAD_SUBTRACT 333
#define SL_KEY_KEYPAD_ADD 334
#define SL_KEY_KEYPAD_ENTER 335
#define SL_KEY_KEYPAD_EQUAL 336
#define SL_KEY_LEFT_SHIFT 340
#define SL_KEY_LEFT_CONTROL 341
#define SL_KEY_LEFT_ALT 342
#define SL_KEY_LEFT_SUPER 343
#define SL_KEY_RIGHT_SHIFT 344
#define SL_KEY_RIGHT_CONTROL 345
#define SL_KEY_RIGHT_ALT 346
#define SL_KEY_RIGHT_SUPER 347

// mouse input symbolic constants
#define SL_MOUSE_BUTTON_1 0
#define SL_MOUSE_BUTTON_2 1
#define SL_MOUSE_BUTTON_3 2
#define SL_MOUSE_BUTTON_4 3
#define SL_MOUSE_BUTTON_5 4
#define SL_MOUSE_BUTTON_6 5
#define SL_MOUSE_BUTTON_7 6
#define SL_MOUSE_BUTTON_8 7
#define SL_MOUSE_BUTTON_LEFT SL_MOUSE_BUTTON_1
#define SL_MOUSE_BUTTON_RIGHT SL_MOUSE_BUTTON_2
#define SL_MOUSE_BUTTON_MIDDLE SL_MOUSE_BUTTON_3

#ifdef __cplusplus
extern "C" {
#endif

	// initialization commands

	SIGIL_API void slWindow(int width, int height, const char *title, int fullScreen);
	SIGIL_API void slShowCursor(int showCursor);
	SIGIL_API void slClose();
	SIGIL_API int slShouldClose();

	// simple input

	SIGIL_API int slGetKey(int key);

	SIGIL_API int slGetMouseButton(int button);
	SIGIL_API int slGetMouseX();
	SIGIL_API int slGetMouseY();

	// simple frame timing

	SIGIL_API double slGetDeltaTime();
	SIGIL_API double slGetTime();

	// rendering commands

	SIGIL_API void slRender();

	// color control

	SIGIL_API void slSetBackColor(double red, double green, double blue);
	SIGIL_API void slSetForeColor(double red, double green, double blue, double alpha);

	// blending control

	SIGIL_API void slSetAdditiveBlend(int additiveBlend);

	// transformations

	SIGIL_API void slPush();
	SIGIL_API void slPop();

	SIGIL_API void slTranslate(double x, double y);
	SIGIL_API void slRotate(double degrees);
	SIGIL_API void slScale(double x, double y);

	// texture loading

	SIGIL_API int slLoadTexture(const char *filename);

	// sound loading and playing

	SIGIL_API int slLoadWAV(const char *filename);
	SIGIL_API int slSoundPlay(int sound);
	SIGIL_API int slSoundLoop(int sound);
	SIGIL_API void slSoundPause(int sound);
	SIGIL_API void slSoundStop(int sound);
	SIGIL_API void slSoundPauseAll();
	SIGIL_API void slSoundResumeAll();
	SIGIL_API void slSoundStopAll();
	SIGIL_API int slSoundPlaying(int sound);
	SIGIL_API int slSoundLooping(int sound);

	// simple shape commands

	SIGIL_API void slTriangleFill(double x, double y, double width, double height);
	SIGIL_API void slTriangleOutline(double x, double y, double width, double height);

	SIGIL_API void slRectangleFill(double x, double y, double width, double height);
	SIGIL_API void slRectangleOutline(double x, double y, double width, double height);

	SIGIL_API void slCircleFill(double x, double y, double radius, int numVertices);
	SIGIL_API void slCircleOutline(double x, double y, double radius, int numVertices);

	SIGIL_API void slSemiCircleFill(double x, double y, double radius, int numVertices, double degrees);
	SIGIL_API void slSemiCircleOutline(double x, double y, double radius, int numVertices, double degrees);

	SIGIL_API void slPoint(double x, double y);

	SIGIL_API void slLine(double x1, double y1, double x2, double y2);

	SIGIL_API void slSetSpriteTiling(double x, double y);
	SIGIL_API void slSetSpriteScroll(double x, double y);
	SIGIL_API void slSprite(int texture, double x, double y, double width, double height);

	// text commands

	SIGIL_API void slSetTextAlign(int fontAlign);
	SIGIL_API double slGetTextWidth(const char *text);
	SIGIL_API double slGetTextHeight(const char *text);
	SIGIL_API int slLoadFont(const char *fontFilename);
	SIGIL_API void slSetFont(int font, int fontSize);
	SIGIL_API void slSetFontSize(int fontSize);
	SIGIL_API void slText(double x, double y, const char *text);

#ifdef __cplusplus
} // closing brace for extern "C"
#endif
