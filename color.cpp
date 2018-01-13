#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"



void text(int text_color = 7 on int paper_color = 0)
{
	// defaults to light_gray on black
	int color_total = (text_color + (paper_color * 16));
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_total);
}