#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"
#include"function_define.h"
#include"structs.h"
extern struct bill b[100];

void save_sales()
{
	read();
	for (int i = 1; i <= 100; i++)
	{
		if (tid[i] != 0)
		{
			tsaled[i] = pquantity[i] - cquantity[i];
			psaled[i] = psaled[i] + tsaled[i];
			tprofit = tquantity[i] * (psprice[i] - pbprice[i]);
			pprofit[i] = pprofit[i] + tprofit;
			pquantity[i] = cquantity[i];
			//cout << "\n psaled" << psaled[i] << " pprofit" << pprofit[i] << " pquantity" << pquantity[i];
			//getch();


		}
	}
	for (int i = 1; i <= 100; i++)
	{
		for (int j = 1; j < 100; j++)
		{
			if (tid[j] != 0)
			{
				b[bid].b_pid[j] = tid[j];
				b[bid].b_name[j] = pname[j];
				b[bid].b_price[j] = tprice[j];
				b[bid].b_quantity[j] = tquantity[j];


			}

			b[bid].b_total = itotal;
			b[bid].b_totalitems = totalitems;
			b[bid].b_y = y;
			b[bid].b_m = m;
			b[bid].b_d = d;
			b[bid].b_t = t;

		}

	}


	save_bill();

	clean();
	getch();
	start();
}