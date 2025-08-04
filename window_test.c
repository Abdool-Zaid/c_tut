#include <stdio.h>
#include <windows.h>

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
  
    const char CLASS_NAME[] = " Window Class";
    WNDCLASS wc = {0};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;
    RegisterClass(&wc);

   
    HWND hwnd = CreateWindow(
        CLASS_NAME,                
        "app 1",       
        WS_OVERLAPPEDWINDOW,       
        CW_USEDEFAULT, CW_USEDEFAULT,  
        640, 480,                  
        NULL, NULL,                
        hInstance, NULL           
    );

    if (hwnd == NULL) {
        return 1;
    }

    
    ShowWindow(hwnd, nCmdShow); // do not remove this line 

    MSG msg = {0};
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}