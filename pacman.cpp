#include <Windows.h>

#ifndef GAMELIB_H
#define GAMELIB_H
// H�m thay d?i k�ch c? c?a khung cmd.
void resizeConsole(int width, int height)
{
       HWND console = GetConsoleWindow();
       RECT r;
       GetWindowRect(console, &r);
       MoveWindow(console, r.left, r.top, width, height, TRUE);
}

// H�m t� m�u.
void textcolor(int x)
{
       HANDLE mau;
       mau = GetStdHandle(STD_OUTPUT_HANDLE);
       SetConsoleTextAttribute(mau, x);
}

// H�m d?ch chuy?n con tr? d?n t?a d? x, y.
void gotoxy(int x, int y)
{
       HANDLE hConsoleOutput;
       COORD Cursor_an_Pos = { x - 1, y - 1 };
       hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
       SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}

// H�m x�a m�n h�nh.
void XoaManHinh()
{
       HANDLE hOut;
       COORD Position;
       hOut = GetStdHandle(STD_OUTPUT_HANDLE);
       Position.X = 0;
       Position.Y = 0;
       SetConsoleCursorPosition(hOut, Position);
}


