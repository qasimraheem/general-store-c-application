#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"
#include"function_define.h"
#include"structs.h"

void copy()
{
	for (int i = 1; i <= 100; i++)
	{
		cquantity[i] = pquantity[i];
	}
}