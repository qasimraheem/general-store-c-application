#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"
#include"function_define.h"




void clean()
{
	for (int i = 1; i <= 100; i++)
	{
		tid[i] = 0;
		tquantity[i] = 0;
		tprice[i] = 0;
	}

}
void clean2()
{
	for (int i = 1; i <= 100; i++)
	{
		tid[i] = 0;
	}

}