#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"
#include"function_define.h"
#include"structs.h"
extern struct bill b[100];
void show_inventry()
{
	int epagerow = 20, spagerow = 0;
	char cho;
	do {
		int stopflag = 0;
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
		cout << "\r\t\t\t\t\t\t\t INVENTRY" << endl;

		text(15);

		text(15 on 4); cout << "\nP_ID    ";
		text(15 on 9); cout << "P_NAME                          ";
		text(0 on 8); cout << "P_QUANTITY      ";
		text(0 on 14); cout << "P_BYING PRICE   ";
		text(0 on 13); cout << "P_SALE PRICE    ";
		text(0 on 11); cout << "P_SALED         ";
		text(0 on 10); cout << "P_PROFIT        " << endl; text(15);
		cout << "=======================================================================================================================" << endl;
		for (int i = spagerow; i <= epagerow; i++)
		{
			if (pid[i + 1] == 0)
			{
				stopflag = 1;
				//cout << "good\n";
			}
			if (pid[i]>0)
			{
				invcounter = 1;

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



		//options:
		if (invcounter == 1)
		{


			do
			{
				cout << "PRESS (N) FOR NEXT RECORD, (P) FOR PREVIOUS RECORD, (E) TO EDIT RECORD:";
				cho = getch();

				if (cho == 'e' || cho == 'E')
				{
					for (int i = 0; i< 45; i++)
					{
						cout << " \b\b";
					}
					edit_inventry();
				}
				else if (cho == 'N'&& epagerow != 100 && stopflag != 1 || cho == 'n'&& epagerow != 100 && stopflag != 1)
				{
					spagerow = spagerow + 20;
					epagerow = epagerow + 20;
				}
				else if (cho == 'p'&& spagerow != 0 || cho == 'P'&& spagerow != 0)
				{
					spagerow = spagerow - 20;
					epagerow = epagerow - 20;
				}
				else if (cho == 27)
				{
					start();
				}
				else
				{
					cout << "\r";
				}
			} while (cho != 'P'&& cho != 'p' && cho != 'e'&& cho != 'E' && cho != 'N' && cho != 'n' &&cho != 27);

		}
		else
		{
			cout << "INVENTRY IS EMPTY. (PRESS ANT KEY)";
			getch();
		}
	} while (TRUE);


}