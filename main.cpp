#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <shellapi.h>

using namespace std;

int number;
int number2;
int number3;
int number4;

int main()
{
    for (int i = 0; i < 20; i++) {
	for (int i = 0; i < 1000; i++) {
        HWND hWnd = GetConsoleWindow();
        number = rand() % 500;
        number2 = rand() % 500;
        number3 = rand() % 2000;
        number4 = rand() % 2000;
        ShellExecute(0, 0, "http://www.rrogacz.pl", 0, 0 , SW_SHOW );
        Sleep(333);
        MoveWindow(hWnd,number,number2,number3,number4,TRUE);
	}
    }
	//return 0;
}
