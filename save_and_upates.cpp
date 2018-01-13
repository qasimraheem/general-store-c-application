#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"
#include"function_define.h"

void save1()
{

	char flag = 0, flag2 = 0;
	text(14);
	cout << endl;
	do {
		text(14);
		cout << "\tDo you want save Y/N?--:\a";
		text(14);
		flag = getche();
		char flag1;
		if (flag == 'y' || flag == 'Y')
		{
			clean();
			read();
			id_create();
			store1();
			iid++;
			text(10);
			cout << "\tYour data is saved";
			//PlaySound(TEXT("1.wav"), NULL, SND_ASYNC);
			text(15);
			do
			{
				getch();
				for (int i = 0; i<45; i++)
				{
					cout << " \b\b";
				}
				cout << "\r";
				text(14);
				cout << "\tDo you want to continue Y/N?\a";
				flag2 = getch();
				text(15);

				if (flag2 == 'n' || flag2 == 'N')
				{
					start();
				}



			} while (flag2 != 'y' && flag2 != 'Y' && flag2 != 'n' && flag2 != 'N');

		}
		else if (flag == 'n' || flag == 'N')
		{
			text(12);
			cout << "\tData not saved!";
			text(15);
			do
			{
				getch();
				for (int i = 0; i<20; i++)
				{
					cout << " \b\b";
				}
				cout << "\r";
				text(14);
				cout << "\tDo you want to continue Y/N?\a";
				flag2 = getch();
				text(15);

				if (flag2 == 'n' || flag2 == 'N')
				{
					start();
				}



			} while (flag2 != 'y' && flag2 != 'Y' && flag2 != 'n' && flag2 != 'N');

		}
		else
		{
			if (flag == 13)
			{
				for (int i = 0; i<2; i++)
				{
					cout << " \b\b";
				}cout << "\r\n";
			}
			else if (flag == 27 || flag == '\t')
			{
				for (int i = 0; i<1; i++)
				{
					cout << " \b\b";
				}cout << "\r";
			}
			else
			{
				for (int i = 0; i<28; i++)
				{
					cout << " \b\b";
				}
			}

		}
	} while (flag != 'y'&&flag != 'n'&&flag != 'Y'&&flag != 'N');
	for (int i = 0; i<40; i++)
	{
		cout << " \b\b";
	}cout << "\r\n";


}
void save2()
{
	char flag = 0, flag2 = 0;
	text(14);
	cout << endl;
	do {
		text(14);
		cout << "\tDo you want save Y/N?--:\a";
		text(14);
		flag = getche();
		char flag1;
		if (flag == 'y' || flag == 'Y')
		{
			store2();
			iid++;
			text(10);
			cout << "\tYour data is saved";
			//PlaySound(TEXT("1.wav"), NULL, SND_ASYNC);
			text(15);
			do
			{
				getch();
				for (int i = 0; i<20; i++)
				{
					cout << " \b\b";
				}
				cout << "\r";
				text(14);
				cout << "\tDo you want to continue Y/N?\a";
				flag2 = getch();
				text(15);

				if (flag2 == 'n' || flag2 == 'N')
				{
					start();
				}



			} while (flag2 != 'y' && flag2 != 'Y' && flag2 != 'n' && flag2 != 'N');

		}
		else if (flag == 'n' || flag == 'N')
		{
			text(12);
			cout << "\tData not saved!";
			text(15);
			do
			{
				getch();
				for (int i = 0; i<20; i++)
				{
					cout << " \b\b";
				}
				cout << "\r";
				text(14);
				cout << "\tDo you want to continue Y/N?\a";
				flag2 = getch();
				text(15);

				if (flag2 == 'n' || flag2 == 'N')
				{
					start();
				}



			} while (flag2 != 'y' && flag2 != 'Y' && flag2 != 'n' && flag2 != 'N');

		}
		else
		{
			if (flag == 13)
			{
				for (int i = 0; i<2; i++)
				{
					cout << " \b\b";
				}cout << "\r\n";
			}
			else if (flag == 27 || flag == '\t')
			{
				for (int i = 0; i<1; i++)
				{
					cout << " \b\b";
				}cout << "\r";
			}
			else
			{
				for (int i = 0; i<28; i++)
				{
					cout << " \b\b";
				}
			}

		}
	} while (flag != 'y'&&flag != 'n'&&flag != 'Y'&&flag != 'N');
	for (int i = 0; i<40; i++)
	{
		cout << " \b\b";
	}cout << "\r\n";


}
void store1()
{
	pid[iid] = iid;
	pname[iid] = name;
	pquantity[iid] = iquantity;
	pbprice[iid] = ibprice;
	psprice[iid] = isprice;
	psaled[iid] = isaled;
	pprofit[iid] = iprofit;
	ofstream outfile;
	outfile.open("store.xls");
	for (int i = 1; i != 100; i++)
	{
		if (pid[i] != 0)
		{
			outfile << pid[i] << "\t" << pname[i] << "\t" << pquantity[i] << "\t" << pbprice[i] << "\t" << psprice[i] << "\t" << psaled[i] << "\t" << pprofit[i] << endl;
		}
	}outfile.close();
	update();
}
void store2()
{
	pname[iid] = name;
	pquantity[iid] = iquantity;
	pbprice[iid] = ibprice;
	psprice[iid] = isprice;
	update();
}
void update()
{
	ofstream outfile;
	outfile.open("store.xls");
	for (int i = 1; i != 100; i++)
	{
		if (pid[i] != 0)
		{
			outfile << pid[i] << "\t" << pname[i] << "\t" << pquantity[i] << "\t" << pbprice[i] << "\t" << psprice[i] << "\t" << psaled[i] << "\t" << pprofit[i] << endl;
		}
	}outfile.close();
}