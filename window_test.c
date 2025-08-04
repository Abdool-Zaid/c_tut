#include <stdio.h>
#include <windows.h>
void onButtonClick(HWND hwnd  ){// TODO: update the user_msg
    
    printf("clicked the button\n");
}
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
         case WM_COMMAND:
            if (LOWORD(wParam) == 1) { // Button ID
                onButtonClick(hwnd); // Call the custom function
            }
            break;
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    char user_msg[]= "Hello, Windows!";
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

    CreateWindow(   //add text
        "STATIC", user_msg,
        WS_VISIBLE | WS_CHILD,
        50, 50, 200, 20, 
        hwnd, NULL, hInstance, NULL
    );

   
    CreateWindow( // add btn
        "BUTTON", "Click Me",
        WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        250, 200, 100, 30,
        hwnd, (HMENU)1, hInstance, NULL 
    );
    
    
    ShowWindow(hwnd, nCmdShow); // do not remove this line 

    MSG msg = {0};
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}