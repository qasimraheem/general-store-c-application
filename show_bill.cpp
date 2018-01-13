#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"
#include"function_define.h"
#include"structs.h"
extern struct bill b[100];

void showbills()
{
	int epagerow = 5, spagerow = 1;
	char cho;

	do {
		int stopflag = 0;
		system("CLS");
		text(15 on 8);
		cout << "\n\n\n                                                                                                                        " << endl;
		string str(coldstore);
		int spaces = str.length();
		cout << "                                                                                                                        ";
		cout << "\r";
		for (int i = 0; i < 60 - (spaces / 2); i++)
		{
			cout << " ";

		}cout << coldstore << endl;
		cout << "                                                                                                                        ";
		text(0 on 8);
		cout << "\r\t\t\t\t\t\t\tBILL REPORT" << endl;

		text(15);

		for (int i = spagerow; i <= epagerow; i++)
		{

			if (b[i].b_id == 0)
			{
				stopflag = 1;

			}
			if (b[i].b_id != 0)
			{

				cout << endl;
				billcounter = 1;
				text(15 on 8);
				cout << "                                                                ";
				cout << "\r\t\t" << coldstore;
				text(0 on 8);
				cout << "\rBILL NUMBER:" << b[i].b_id;
				cout << "\r\t\t\t\t\t    " << b[i].b_y << "/" << b[i].b_m << "/" << b[i].b_d << "-" << b[i].b_t << endl;
				text(15);
				cout << "P_ID\tP_NAME\t\t\t\tP_QUANTITY\tP_PRICE\n";
			}



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

						cout << b[i].b_pid[j] << "\t" << b[i].b_name[j];
						string str(b[i].b_name[j]);
						spaces = str.length();
						for (int i = 0; i < 4 - (spaces / 8); i++)
						{
							cout << "\t";

						}
						cout << b[i].b_quantity[j] << "\t\t" << b[i].b_price[j] << endl;

						//cout << i << j << endl;

					}
				}

			}
			if (b[i].b_id != 0)
			{
				cout << "================================================================" << endl;
				cout << "Total items:" << b[i].b_totalitems << "\t\t\t\t\tTotal bill:" << b[i].b_total << endl;
			}


		}
		char cho = 0;
		cout << "\n\n";
		do
		{
			text(14);
			cout << "PRESS (N) FOR NEXT PAGE, (P) FOR PREVIOUS PAGE, (S) TO SEARCH BILL:";
			cho = getch();
			text(15);
			for (int i = 0; i < 40; i++)
			{
				cout << "\b \b";
			}   cout << "\r";
			if (cho == 's' || cho == 'S')
			{
				search_bill();
			}
			else if (cho == 'N'&& epagerow != 100 && stopflag != 1 || cho == 'n'&& epagerow != 100 && stopflag != 1)
			{
				spagerow = spagerow + 5;
				epagerow = epagerow + 5;
			}
			else if (cho == 'p'&& spagerow != 1 || cho == 'P'&& spagerow != 1)
			{
				spagerow = spagerow - 5;
				epagerow = epagerow - 5;
			}
			else if (cho == 27)
			{
				start();
			}
			else
			{
				cout << "\r";
			}
		} while (cho != 'p'&&cho != 's'&&cho != 'S'&&cho != 'n'&&cho != 'P'&&cho != 'N'&& cho != 27);


	} while (true);

}
