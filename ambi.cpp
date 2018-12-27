#include "pch.h"
#include <iostream>
#include <windows.h>

using namespace std;
COLORREF centerColor;
POINT cent;
BYTE red;
BYTE green;
BYTE blue;

int main()
{
	HDC hdc_ = GetDC(NULL);  //I'm not sure if this is right or what exactly it does.
	cent.x = 1;
	cent.y = 1;
	centerColor = GetPixel(hdc_, cent.x, cent.y);

	red = GetRValue(centerColor);

	cout << centerColor;
}
