#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"
#include"function_define.h"
#include"structs.h"

struct bill b[100];
void cleanbill()
{
	for (int i = 1; i < 100; i++)
	{
		for (int j = 1; j<i; j++)
		{
			b[i].b_id = 0;
			b[i].b_pid[j] = 0;
			b[i].b_name[j] = "\0";
			b[i].b_price[j] = 0;
			b[i].b_quantity[j] = 0;

		}
	}
}