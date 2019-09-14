static Janet cfun_InitWindow(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    int32_t width = janet_getinteger(argv, 0);
    int32_t height = janet_getinteger(argv, 1);
    const char *name = janet_getcstring(argv, 2);
    InitWindow(width, height, name);
    return janet_wrap_nil();
}

static Janet cfun_WindowShouldClose(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    return janet_wrap_boolean(WindowShouldClose());
}

static Janet cfun_CloseWindow(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    CloseWindow();
    return janet_wrap_nil();
}

static Janet cfun_IsWindowReady(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    return janet_wrap_boolean(IsWindowReady());
}

static Janet cfun_IsWindowMinimized(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    return janet_wrap_boolean(IsWindowMinimized());
}

static Janet cfun_IsWindowResized(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    return janet_wrap_boolean(IsWindowResized());
}

static Janet cfun_IsWindowHidden(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    return janet_wrap_boolean(IsWindowHidden());
}

static Janet cfun_ToggleFullscreen(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    ToggleFullscreen();
    return janet_wrap_nil();
}

static Janet cfun_UnhideWindow(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    UnhideWindow();
    return janet_wrap_nil();
}

static Janet cfun_HideWindow(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    HideWindow();
    return janet_wrap_nil();
}

static Janet cfun_SetWindowTitle(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    const char *title = janet_getcstring(argv, 0);
    SetWindowTitle(title);
    return janet_wrap_nil();
}

static Janet cfun_SetWindowPosition(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    int x = janet_getinteger(argv, 0);
    int y = janet_getinteger(argv, 1);
    SetWindowPosition(x, y);
    return janet_wrap_nil();
}

static Janet cfun_SetWindowMonitor(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int monitor = janet_getinteger(argv, 0);
    SetWindowMonitor(monitor);
    return janet_wrap_nil();
}

static Janet cfun_SetWindowMinSize(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    int width = janet_getinteger(argv, 0);
    int height = janet_getinteger(argv, 1);
    SetWindowMinSize(width, height);
    return janet_wrap_nil();
}

static Janet cfun_SetWindowSize(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    int width = janet_getinteger(argv, 0);
    int height = janet_getinteger(argv, 1);
    SetWindowSize(width, height);
    return janet_wrap_nil();
}

static Janet cfun_GetWindowHandle(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    return janet_wrap_pointer(GetWindowHandle());
}

static Janet cfun_GetScreenWidth(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    return janet_wrap_integer(GetScreenWidth());
}

static Janet cfun_GetScreenHeight(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    return janet_wrap_integer(GetScreenWidth());
}

static Janet cfun_GetMonitorCount(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    return janet_wrap_integer(GetMonitorCount());
}

static Janet cfun_GetMonitorWidth(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int monitor = janet_getinteger(argv, 0);
    return janet_wrap_integer(GetMonitorWidth(monitor));
}

static Janet cfun_GetMonitorHeight(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int monitor = janet_getinteger(argv, 0);
    return janet_wrap_integer(GetMonitorHeight(monitor));
}

static Janet cfun_GetMonitorPhysicalWidth(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int monitor = janet_getinteger(argv, 0);
    return janet_wrap_integer(GetMonitorPhysicalWidth(monitor));
}

static Janet cfun_GetMonitorPhysicalHeight(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int monitor = janet_getinteger(argv, 0);
    return janet_wrap_integer(GetMonitorPhysicalHeight(monitor));
}

static Janet cfun_GetMonitorName(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int monitor = janet_getinteger(argv, 0);
    return janet_cstringv(GetMonitorName(monitor));
}

static Janet cfun_GetClipboardText(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    return janet_cstringv(GetClipboardText());
}

static Janet cfun_SetClipboardText(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    const char *text = janet_getcstring(argv, 0);
    SetClipboardText(text);
    return janet_wrap_nil();
}

static Janet cfun_ShowCursor(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    ShowCursor();
    return janet_wrap_nil();
}

static Janet cfun_HideCursor(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    HideCursor();
    return janet_wrap_nil();
}

static Janet cfun_IsCursorHidden(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    return janet_wrap_boolean(IsCursorHidden());
}

static Janet cfun_EnableCursor(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    EnableCursor();
    return janet_wrap_nil();
}

static Janet cfun_DisableCursor(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    DisableCursor();
    return janet_wrap_nil();
}

static Janet cfun_ClearBackground(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    Color color = jaylib_getcolor(argv, 0);
    ClearBackground(color);
    return janet_wrap_nil();
}

static Janet cfun_BeginDrawing(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    BeginDrawing();
    return janet_wrap_nil();
}

static Janet cfun_EndDrawing(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    EndDrawing();
    return janet_wrap_nil();
}

static Janet cfun_BeginMode2D(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    BeginMode2D(jaylib_getcamera2d(argv, 0));
    return  janet_wrap_nil();
}

static Janet cfun_EndMode2D(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    EndMode2D();
    return janet_wrap_nil();
}

static Janet cfun_SetTargetFPS(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int fps = janet_getinteger(argv, 0);
    SetTargetFPS(fps);
    return janet_wrap_nil();
}

static Janet cfun_GetFPS(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    return janet_wrap_integer(GetFPS());
}

static Janet cfun_GetFrameTime(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    return janet_wrap_number(GetFrameTime());
}

static Janet cfun_GetTime(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    return janet_wrap_number(GetTime());
}

static Janet cfun_IsKeyPressed(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int key = jaylib_castkey(argv, 0);
    return janet_wrap_boolean(IsKeyPressed(key));
}

static Janet cfun_IsKeyDown(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int key = jaylib_castkey(argv, 0);
    return janet_wrap_boolean(IsKeyDown(key));
}

static Janet cfun_IsKeyUp(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int key = jaylib_castkey(argv, 0);
    return janet_wrap_boolean(IsKeyUp(key));
}

static Janet cfun_IsKeyReleased(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int key = jaylib_castkey(argv, 0);
    return janet_wrap_boolean(IsKeyReleased(key));
}

static Janet cfun_GetKeyPressed(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    int key = GetKeyPressed();
    for (unsigned i = 0; i < (sizeof(key_defs) / sizeof(KeyDef)); i++) {
        if (key_defs[i].key == key)
            return janet_ckeywordv(key_defs[i].name);
    }
    return janet_wrap_integer(key);
}

static Janet cfun_SetExitKey(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int key = jaylib_castkey(argv, 0);
    SetExitKey(key);
    return janet_wrap_nil();
}

static Janet cfun_IsGamepadAvailable(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int gamepad = janet_getinteger(argv, 0);
    return janet_wrap_boolean(IsGamepadAvailable(gamepad));
}

static Janet cfun_IsGamepadName(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    int gamepad = janet_getinteger(argv, 0);
    const char *name = janet_getcstring(argv, 1);
    return janet_wrap_boolean(IsGamepadName(gamepad, name));
}

static Janet cfun_GetGamepadName(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int gamepad = janet_getinteger(argv, 0);
    return janet_cstringv(GetGamepadName(gamepad));
}

static Janet cfun_IsGamepadButtonDown(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    int gamepad = janet_getinteger(argv, 0);
    int button = jaylib_castbutton(argv, 1);
    return janet_wrap_boolean(IsGamepadButtonDown(gamepad, button));
}

static Janet cfun_IsGamepadButtonReleased(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    int gamepad = janet_getinteger(argv, 0);
    int button = jaylib_castbutton(argv, 1);
    return janet_wrap_boolean(IsGamepadButtonReleased(gamepad, button));
}

static Janet cfun_IsGamepadButtonUp(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    int gamepad = janet_getinteger(argv, 0);
    int button = jaylib_castbutton(argv, 1);
    return janet_wrap_boolean(IsGamepadButtonUp(gamepad, button));
}

static Janet cfun_IsGamepadButtonPressed(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    int gamepad = janet_getinteger(argv, 0);
    int button = jaylib_castbutton(argv, 1);
    return janet_wrap_boolean(IsGamepadButtonPressed(gamepad, button));
}

static Janet cfun_GetGamepadButtonPressed(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    return janet_wrap_integer(GetGamepadButtonPressed());
}

static Janet cfun_GetGamepadAxisCount(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int gamepad = janet_getinteger(argv, 0);
    return janet_wrap_integer(GetGamepadAxisCount(gamepad));
}

static Janet cfun_GetGamepadAxisMovement(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    int gamepad = janet_getinteger(argv, 0);
    int axis = jaylib_castaxis(argv, 1);
    return janet_wrap_number((double) GetGamepadAxisMovement(gamepad, axis));
}

static Janet cfun_IsMouseButtonPressed(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int button = jaylib_castmouse(argv, 0);
    return janet_wrap_boolean(IsMouseButtonPressed(button));
}

static Janet cfun_IsMouseButtonDown(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int button = jaylib_castmouse(argv, 0);
    return janet_wrap_boolean(IsMouseButtonDown(button));
}

static Janet cfun_IsMouseButtonReleased(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int button = jaylib_castmouse(argv, 0);
    return janet_wrap_boolean(IsMouseButtonReleased(button));
}

static Janet cfun_IsMouseButtonUp(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int button = jaylib_castmouse(argv, 0);
    return janet_wrap_boolean(IsMouseButtonUp(button));
}

static Janet cfun_GetMouseX(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    return janet_wrap_integer(GetMouseX());
}

static Janet cfun_GetMouseY(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    return janet_wrap_integer(GetMouseY());
}

static Janet cfun_GetMousePosition(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    Vector2 pos = GetMousePosition();
    return jaylib_uncastvec2(pos);
}

static Janet cfun_SetMousePosition(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    int x = janet_getinteger(argv, 0);
    int y = janet_getinteger(argv, 1);
    SetMousePosition(x, y);
    return janet_wrap_nil();
}

static Janet cfun_SetMouseOffset(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    int x = janet_getinteger(argv, 0);
    int y = janet_getinteger(argv, 1);
    SetMouseOffset(x, y);
    return janet_wrap_nil();
}

static Janet cfun_SetMouseScale(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    float x = (float) janet_getnumber(argv, 0);
    float y = (float) janet_getnumber(argv, 1);
    SetMouseScale(x, y);
    return janet_wrap_nil();
}

static Janet cfun_GetMouseWheelMove(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    return janet_wrap_integer(GetMouseWheelMove());
}

static Janet cfun_GetTouchX(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    return janet_wrap_integer(GetTouchX());
}

static Janet cfun_GetTouchY(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    return janet_wrap_integer(GetTouchY());
}

static Janet cfun_GetTouchPosition(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int index = janet_getinteger(argv, 0);
    Vector2 pos = GetTouchPosition(index);
    return jaylib_uncastvec2(pos);
}

static JanetReg core_cfuns[] = {
    {"init-window", cfun_InitWindow, NULL},
    {"window-should-close", cfun_WindowShouldClose, NULL},
    {"close-window", cfun_CloseWindow, NULL},
    {"window-ready?", cfun_IsWindowReady, NULL},
    {"window-minimized?", cfun_IsWindowMinimized, NULL},
    {"window-resized?", cfun_IsWindowResized, NULL},
    {"window-hidden?", cfun_IsWindowHidden, NULL},
    {"toggle-fullscreen", cfun_ToggleFullscreen, NULL},
    {"unhide-window", cfun_UnhideWindow, NULL},
    {"hide-window", cfun_HideWindow, NULL},
    {"set-window-title", cfun_SetWindowTitle, NULL},
    {"set-window-position", cfun_SetWindowPosition, NULL},
    {"set-window-monitor", cfun_SetWindowMonitor, NULL},
    {"set-window-min-size", cfun_SetWindowMinSize, NULL},
    {"set-window-size", cfun_SetWindowSize, NULL},
    {"get-window-handle", cfun_GetWindowHandle, NULL},
    {"get-screen-width", cfun_GetScreenWidth, NULL},
    {"get-screen-height", cfun_GetScreenHeight, NULL},
    {"get-monitor-count", cfun_GetMonitorCount, NULL},
    {"get-monitor-width", cfun_GetMonitorWidth, NULL},
    {"get-monitor-height", cfun_GetMonitorHeight, NULL},
    {"get-monitor-physical-width", cfun_GetMonitorPhysicalWidth, NULL},
    {"get-monitor-physical-height", cfun_GetMonitorPhysicalHeight, NULL},
    {"get-monitor-name", cfun_GetMonitorName, NULL},
    {"get-clipboard-text", cfun_GetClipboardText, NULL},
    {"set-clipboard-text", cfun_SetClipboardText, NULL},
    {"show-cursor", cfun_ShowCursor, NULL},
    {"hide-cursor", cfun_HideCursor, NULL},
    {"cursor-hidden?", cfun_IsCursorHidden, NULL},
    {"enable-cursor", cfun_EnableCursor, NULL},
    {"disable-cursor", cfun_DisableCursor, NULL},
    {"clear-background", cfun_ClearBackground, NULL},
    {"begin-drawing", cfun_BeginDrawing, NULL},
    {"end-drawing", cfun_EndDrawing, NULL},
    {"begin-mode-2d", cfun_BeginMode2D, NULL},
    {"end-mode-2d", cfun_EndMode2D, NULL},
    {"set-target-fps", cfun_SetTargetFPS, NULL},
    {"get-fps", cfun_GetFPS, NULL},
    {"get-frame-time", cfun_GetFrameTime, NULL},
    {"get-time", cfun_GetTime, NULL},
    {"key-pressed?", cfun_IsKeyPressed, NULL},
    {"key-released?", cfun_IsKeyReleased, NULL},
    {"key-up?", cfun_IsKeyUp, NULL},
    {"key-down?", cfun_IsKeyDown, NULL},
    {"get-key-pressed", cfun_GetKeyPressed, NULL},
    {"set-exit-key", cfun_SetExitKey, NULL},
    {"gamepad-available?", cfun_IsGamepadAvailable, NULL},
    {"gamepad-name?", cfun_IsGamepadName, NULL},
    {"gamepad-button-down?", cfun_IsGamepadButtonDown, NULL},
    {"gamepad-button-up?", cfun_IsGamepadButtonUp, NULL},
    {"gamepad-button-pressed?", cfun_IsGamepadButtonPressed, NULL},
    {"gamepad-button-released?", cfun_IsGamepadButtonReleased, NULL},
    {"get-gamepad-button-pressed", cfun_GetGamepadButtonPressed, NULL},
    {"get-gamepad-name", cfun_GetGamepadName, NULL},
    {"get-gamepad-axis-count", cfun_GetGamepadAxisCount, NULL},
    {"get-gamepad-axix-movement", cfun_GetGamepadAxisMovement, NULL},
    {"mouse-button-pressed?", cfun_IsMouseButtonPressed, NULL},
    {"mouse-button-up?", cfun_IsMouseButtonUp, NULL},
    {"mouse-button-released?", cfun_IsMouseButtonReleased, NULL},
    {"mouse-button-down?", cfun_IsMouseButtonDown, NULL},
    {"get-mouse-x", cfun_GetMouseX, NULL},
    {"get-mouse-y", cfun_GetMouseY, NULL},
    {"get-mouse-position", cfun_GetMousePosition, NULL},
    {"set-mouse-position", cfun_SetMousePosition, NULL},
    {"set-mouse-offset", cfun_SetMouseOffset, NULL},
    {"set-mouse-scale", cfun_SetMouseScale, NULL},
    {"get-mouse-wheel-move", cfun_GetMouseWheelMove, NULL},
    {"get-touch-x", cfun_GetTouchX, NULL},
    {"get-touch-y", cfun_GetTouchY, NULL},
    {"get-touch-position", cfun_GetTouchPosition, NULL},
    {NULL, NULL, NULL}
};
