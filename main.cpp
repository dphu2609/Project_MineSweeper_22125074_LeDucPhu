#include <iostream>
#include <windows.h>
#include <conio.h>
#include "function.cpp"

using namespace std;

int main()
{
    HWND hwnd = GetConsoleWindow();
    DWORD style = GetWindowLong(hwnd, GWL_STYLE);
    style &= ~WS_MAXIMIZEBOX;
    SetWindowLong(hwnd, GWL_STYLE, style);
    SetWindowPos(hwnd, NULL, 0, 0, 0, 0, SWP_NOSIZE|SWP_NOMOVE|SWP_FRAMECHANGED);
    HWND hWnd=GetConsoleWindowNT();
    MoveWindow(hWnd,0,0,500,500,TRUE);
    system("cls");
    srand(time(0));
    NoCursorType();
    menu();
    return 0;
}