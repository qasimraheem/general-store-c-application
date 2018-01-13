#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"
#include"function_define.h"
#include"structs.h"

void sale_product()
{
	system("CLS");
	clean();
	read();
	text(15 on 8);
	cout << "\n\n\n                                                                                                                        " << endl;
	string str(coldstore);
	int spaces = str.length();
	cout << "                                                                                                                        ";
	cout << "\r";
	for (int i = 0; i < 60 - (spaces / 2); i++)
	{
		cout << " ";

	}cout << coldstore << endl; cout << "                                                                                                                        ";
	text(0 on 8);
	cout << "\r\t\t\t\t\t\t       SALE-PRODUCTS\n" << endl;
	text(15);
	clean();
	copy();

	text(15 on 4); cout << "\nP_ID    ";
	text(15 on 9); cout << "P_NAME                          ";
	text(0 on 8); cout << "P_QUANTITY      ";
	text(0 on 14); cout << "P_BYING PRICE   ";
	text(0 on 13); cout << "P_SALE PRICE    ";
	text(0 on 11); cout << "P_SALED         ";
	text(0 on 10); cout << "P_PROFIT        " << endl; text(15);
	cout << "=======================================================================================================================" << endl;
	for (int i = 1; i <= 100; i++)
	{
		if (pid[i]>0 && pquantity[i] != 0)
		{


			if (pprofit[i] <= 0)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t"; text(0 on 12); cout << "                \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";  cout << pprofit[i] << "$"; text(15);
			}
			else
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t"; text(0 on 10); cout << "                \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";  cout << pprofit[i] << "$"; text(15);
			}
			cout << "\r\t\t\t\t\t\t\t\t\t\t\t"; text(0 on 11); cout << "                \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"; cout << psaled[i]; text(15);
			cout << "\r\t\t\t\t\t\t\t\t\t"; text(0 on 13); cout << "                \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"; cout << psprice[i]; text(15);
			cout << "\r\t\t\t\t\t\t\t"; text(0 on 14); cout << "                \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";  cout << pbprice[i]; text(15);
			cout << "\r\t\t\t\t\t"; text(0 on 8); cout << "                \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"; cout << pquantity[i]; text(15);
			cout << "\r\t"; text(15 on 9); cout << "                                \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"; cout << pname[i]; text(15);
			cout << "\r"; text(15 on 4); cout << "        \b\b\b\b\b\b\b\b"; cout << pid[i] << endl; text(15);
		}

	}
	cout << "=======================================================================================================================" << endl;

	while (true)
	{
		char opt;


		do
		{

			text(14);
			read();
			cout << "Insert (+,a)to add/(-,d)to delete/enter for bill.\a";
			copy();
			text(15);
			opt = getch();
			if (opt == 27)
			{
				start();
			}
			for (int i = 0; i<50; i++)
			{
				cout << " \b\b";
			}
			cout << "\n";
			if (opt == '+' || opt == 'a')
			{
				read();
				copy();
				edit_search();
				cin.ignore();
				tid[iid] = iid;
				cout << "\tProduct Name :" << pname[iid];
				cout << cquantity[iid];
				do
				{

					p_quantity();
					if (iquantity <= cquantity[iid])
					{

						//cout << "good";
					}
					else
					{
						for (int i = 0; i < 19; i++)
						{
							cout << " \b\b";
						}
					}
				} while (iquantity > cquantity[iid]);

				cquantity[iid] = cquantity[iid] - iquantity;
				//cout << "copy"<<cquantity[iid];
				tquantity[iid] = tquantity[iid] + iquantity;
				cout << "\tprice:" << psprice[iid] * iquantity;
				tprice[iid] = tprice[iid] + (psprice[iid] * iquantity);
				itotal = 0;
				for (int i = 1; i <= 100; i++)
				{
					itotal = itotal + tprice[i];
				}

				text(10);
				cout << "\n\t\t\t\t\t\t\t\t\tTOTAL :" << itotal;
				text(15);
				opt = getch();
				for (int i = 0; i<50; i++)
				{
					cout << " \b\b";
				}

				cout << endl;

				//add
				tsaled[iid] = pquantity[iid] - cquantity[iid];
				psaled[iid] = psaled[iid] + tsaled[iid];
				tprofit = iquantity * (psprice[iid] - pbprice[iid]);
				pprofit[iid] = pprofit[iid] + tprofit;
				pquantity[iid] = cquantity[iid];


				//update
				update();
			}
			else if (opt == '-' || opt == 'd')
			{
				read();
				copy();
				//search in tid
				edit_search();
				cin.ignore();
				cout << "\tProduct Name :" << pname[iid];
				do
				{
					p_quantity();
					if (iquantity <= tquantity[iid])
					{
						//creat error
						//cout << "good";
					}
					else
					{
						for (int i = 0; i < 19; i++)
						{
							cout << " \b\b";
						}
					}
				} while (iquantity > tquantity[iid]);
				tquantity[iid] = tquantity[iid] - iquantity;
				cquantity[iid] = cquantity[iid] + iquantity;
				tprice[iid] = tprice[iid] - (iquantity*psprice[iid]);
				cout << "\tprice:-" << iquantity*psprice[iid];
				itotal = 0;
				for (int i = 1; i <= 100; i++)
				{
					itotal = itotal + tprice[i];
				}

				text(10);
				cout << "\n\t\t\t\t\t\t\t\t\ttotal :" << itotal;
				text(15);
				opt = getch();
				for (int i = 0; i<50; i++)
				{
					cout << " \b\b";
				}

				cout << endl;

				//deleteitem
				tsaled[iid] = pquantity[iid] - cquantity[iid];
				psaled[iid] = psaled[iid] + tsaled[iid];
				tprofit = iquantity * (psprice[iid] - pbprice[iid]);
				cout << tprofit;
				pprofit[iid] = pprofit[iid] - tprofit;
				pquantity[iid] = cquantity[iid];


				//
				update();
			}
			else if (opt == 13)
			{
				int flag = 0;
				for (int i = 0; i < 100; i++)
				{
					if (tid[i]>0)
					{
						flag = 1;
						break;
					}
				}
				if (flag == 1)
				{
					text(15 on 8);
					cout << "                                                                ";
					cout << "\r\t\t" << coldstore;
					text(0 on 8);
					cout << "\r";

					//bill clean and read`
					cleanbill();
					read_bill();
					bill_create();
					currentDateTime();
					cout << "\t\t\t\t    " << y << "/" << m << "/" << d << "-" << t << endl;
					copy();
					text(15);
					for (int i = 0; i <50; i++)
					{
						cout << " \b\b";
					}
					cout << "\nP_ID\tP_NAME\t\t\t\tP_QUANTITY\tP_PRICE\n";
					for (int i = 0; i < 100; i++)
					{
						if (tid[i]>0)
						{
							cout << tid[i] << "\t" << pname[i] << "\t\t\t\t" << tquantity[i] << "\t\t" << tprice[i] << endl;
						}
					}
					cout << "================================================================" << endl;
					totalitems = 0;
					for (int i = 1; i <= 100; i++)
					{
						if (tid[i]>0)
						{
							totalitems++;

						}

					}
					cout << "Total items:" << totalitems << "\t\t\t\t\tTotal bill:" << itotal << endl;
					//total items
					//total
					//billdetails
					save_sales();
				}


			}
			else
			{
				//nothing
			}

		} while (opt != '+'&&opt != 'a' && opt != '-' && opt != 'd' && opt != 13);

	}

}