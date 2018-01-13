#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"
#include"function_define.h"
#include"structs.h"
extern struct bill b[100];

void s_by_billnumber()
{
	int s_billno;
	char user[10];
	user[0] = NULL;//to store username.
	cout << "\n    Enter BILL NUMBER:";
	//to store password.
	int i = 0;
	char a;//a Temp char
	for (i = 0;;)//infinite loop
	{
		a = getch();//stores char typed in a

					//check if a is numeric or alphabet
		if (a != 8 && a >= '0'&&a <= '9')
		{
			if (a != 13)
			{
				user[i] = a;//stores a in pass
				++i;
				cout << a;
			}
		}
		if (a == '\b'&&i >= 1)//if user typed backspace
							  //i should be greater than 1.
		{
			cout << "\b \b";//rub the character behind the cursor.
			--i;
			if (i == 0)
			{
				user[0] = NULL;
			}
		}
		if (a == '\r'&&user[0] != '\0')//if enter is pressed
		{
			user[i] = '\0';//null means end of string.
			break;//break the loop
		}
	}

	s_billno = atoi(user);
	int flag = 0;
	for (int i = 0; i<100; i++)
	{
		if (b[i].b_id == s_billno)
		{
			flag = 1;
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

			for (int j = 1; j < 100; j++)
			{
				if (b[i].b_id == s_billno)
				{
					if (b[i].b_pid[j] > 0)
					{

						cout << b[i].b_pid[j] << "\t" << b[i].b_name[j] << "\t\t\t\t" << b[i].b_quantity[j] << "\t\t" << b[i].b_price[j] << endl;

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

	}
	if (flag == 0)
	{
		text(12);
		cout << "\n    BILL NOT FOUND!\n";
		text(15);
	}
	//checker


}
void s_by_billdate()
{
	string s_y, s_m, s_d;
	char year[10];
	year[0] = NULL;//to store username.
	year[1] = NULL;
	year[2] = NULL;
	year[3] = NULL;
	cout << "\n    Enter YEAR:";
	//to store password.
	int i = 0;
	char a;//a Temp char
	for (i = 0;;)//infinite loop
	{
		a = getch();//stores char typed in a

		if (a == 27 && i == 0)
		{

			break;
		}
		//check if a is numeric or alphabet
		if (a != 8 && a >= '0'&&a <= '9')
		{
			if (a != 13)
			{
				year[i] = a;//stores a in pass
				++i;
				cout << a;
			}
		}
		if (a == '\b'&&i >= 1)//if user typed backspace
							  //i should be greater than 1.
		{
			cout << "\b \b";//rub the character behind the cursor.
			--i;
			if (i == 0)
			{
				year[0] = NULL;
			}
		}
		if (a == '\r'&&year[0] != '\0')//if enter is pressed
		{
			if (a == '\r'&&year[1] != '\0')
			{
				if (a == '\r'&&year[2] != '\0')
				{
					if (a == '\r'&&year[3] != '\0')
					{
						year[i] = '\0';//null means end of string.
						break;//break the loop
					}
				}
			}

		}
	}

	s_y = year;


	//month
	char month[10];
	month[0] = NULL;
	month[1] = NULL;//to store username.
	cout << "\n    Enter month:";
	//to store password.
	i = 0;
	a;//a Temp char
	for (i = 0;;)//infinite loop
	{
		a = getch();//stores char typed in a

		if (a == 27 && i == 0)
		{

			break;
		}
		//check if a is numeric or alphabet
		if (a != 8 && a >= '0'&&a <= '9')
		{
			if (a != 13)
			{
				month[i] = a;//stores a in pass
				++i;
				cout << a;
			}
		}
		if (a == '\b'&&i >= 1)//if user typed backspace
							  //i should be greater than 1.
		{
			cout << "\b \b";//rub the character behind the cursor.
			--i;
			if (i == 0)
			{
				month[0] = NULL;
			}
		}
		if (a == '\r'&&month[0] != '\0'&&month[1] != '\0')//if enter is pressed
		{
			month[i] = '\0';//null means end of string.
			break;//break the loop
		}
	}

	s_m = month;

	//day
	char day[10];
	day[0] = NULL;//to store username.
	day[1] = NULL;
	cout << "\n    Enter day:";
	//to store password.
	i = 0;
	a;//a Temp char
	for (i = 0;;)//infinite loop
	{
		a = getch();//stores char typed in a

		if (a == 27 && i == 0)
		{

			break;
		}
		//check if a is numeric or alphabet
		if (a != 8 && a >= '0'&&a <= '9')
		{
			if (a != 13)
			{
				day[i] = a;//stores a in pass
				++i;
				cout << a;
			}
		}
		if (a == '\b'&&i >= 1)//if user typed backspace
							  //i should be greater than 1.
		{
			cout << "\b \b";//rub the character behind the cursor.
			--i;
			if (i == 0)
			{
				day[0] = NULL;
			}
		}
		if (a == '\r'&&day[0] != '\0'&&day[1] != '\0')//if enter is pressed
		{
			day[i] = '\0';//null means end of string.
			break;//break the loop
		}
	}

	s_d = day;

	for (int i = 0; i<100; i++)
	{
		if (s_y == b[i].b_y&&s_m == b[i].b_m&&s_d == b[i].b_d)
		{
			text(15 on 8);
			cout << endl;
			cout << "                                                                ";
			cout << "\r\t\t" << coldstore;
			text(0 on 8);
			cout << "\rBILL NUMBER:" << b[i].b_id;
			cout << "\r\t\t\t\t\t    " << b[i].b_y << "/" << b[i].b_m << "/" << b[i].b_d << "-" << b[i].b_t << endl;
			text(15);
			cout << "P_ID\tP_NAME\t\t\t\tP_QUANTITY\tP_PRICE\n";

			for (int j = 1; j < 100; j++)
			{
				if (b[i].b_id != 0)
				{
					if (b[i].b_pid[j] > 0)
					{
						cout << b[i].b_pid[j] << "\t" << b[i].b_name[j] << "\t\t\t\t" << b[i].b_quantity[j] << "\t\t" << b[i].b_price[j] << endl;

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


	}
}
void search_bill()
{
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
	cout << "\r\t\t\t\t\t\t    FILTER BILL REPORTS" << endl;

	text(15);


	char cho;
	text(8);
	cout << "\n\t\t\t\t\t\t   ";
	cout << "1.SEARCH BY BILL NUMBER";
	cout << "\n\t\t\t\t\t\t   ";
	cout << "2.SEARCH BY BILL DATE";
	cho = getch();
	text(15);
	if (cho == '1')
	{
		s_by_billnumber();

		do
		{
			text(14);
			cout << "    DO YOU WANT TO CONTINUE?Y/N:\a";
			cho = getch();
			text(15);
			for (int i = 0; i <31; i++)
			{
				cout << "\b \b";
			}   cout << "\r";
			if (cho == 'y' || cho == 'Y')
			{
				s_by_billnumber();
			}
			if (cho == 'n' || cho == 'N')
			{
				search_bill();

			}
			if (cho == 27)
			{
				start();
			}
		} while (TRUE);
		//only enters numbers


	}
	else if (cho == '2')
	{
		s_by_billdate();

		do
		{
			text(14);
			cout << "    DO YOU WANT TO CONTINUE?Y/N:\a";
			cho = getch();
			text(15);
			for (int i = 0; i <31; i++)
			{
				cout << "\b \b";
			}   cout << "\r";
			if (cho == 'y' || cho == 'Y')
			{
				s_by_billdate();
			}
			if (cho == 'n' || cho == 'N')
			{
				search_bill();

			}
			if (cho == 27)
			{
				start();
			}
		} while (TRUE);
	}
	else if (cho == 27)
	{
		start();
	}
	else
	{
		search_bill();
	}

}