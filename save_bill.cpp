#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"
#include"function_define.h"
#include"structs.h"
extern struct bill b[100];

void save_bill()
{
	ofstream outfile;
	outfile.open("bill.xls");
	for (int i = 1; i <= 100; i++)
	{


		for (int j = 1; j < 100; j++)
		{
			if (b[i].b_id != 0)
			{
				if (b[i].b_pid[j] > 0)
				{

					/*cout << " bill id=" << b[i].b_id;
					cout << " billp=" << b[i].b_pid[j]<<"num"<<j;
					cout << " name=" << b[i].b_name[j];
					cout << " price=" << b[i].b_price[j];
					cout << " quantity=" << b[i].b_quantity[j];
					cout << " total=" << b[i].b_total;
					cout << " bill items=" << b[i].b_totalitems;
					cout << " time=" << b[i].b_time << endl;
					*/
					outfile << b[i].b_id << "\t" << b[i].b_y << "\t" << b[i].b_m << "\t" << b[i].b_d << "\t" << b[i].b_t << "\t" << b[i].b_pid[j] << "\t" << b[i].b_name[j] << "\t" << b[i].b_quantity[j] << "\t" << b[i].b_price[j] << "\t" << b[i].b_totalitems << "\t" << b[i].b_total << endl;


					//cout << i << j << endl;

				}
			}

		}

	}
	outfile.close();
	update();
}
