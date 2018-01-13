#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"
#include"function_define.h"
#include"structs.h"

void bill_create()
{

	int flag = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (b[i].b_id == 0)
		{
			b[i].b_id = i;
			bid = b[i].b_id;
			cout << "BILL NUMBER:" << b[i].b_id;
			break;
		}




	}
}

