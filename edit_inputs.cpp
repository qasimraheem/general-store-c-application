#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"
#include"function_define.h"


void e_name()
{

	char user[30];//to store 
	user[0] = NULL;//to store username
	cout << "  Enter product name:";
	//to store password.
	int i = 0;
	char a;//a Temp char
	for (i = 0;;)//infinite loop
	{
		a = getch();//stores char typed in a

					//check if a is numeric or alphabet
		if (a == 27 && i == 0)
		{
			strcpy(user, pname[iid].c_str());
			cout << user;
			break;

		}
		if (a != 8 && (a >= 'a'&&a <= 'z' || (a >= 'A'&&a <= 'Z' || a >= '0'&&a <= '9')) || (a == '-' || a == '_' || a == '.'))
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

	name = user;
}

void e_quantity()
{
	char user[10];
	user[0] = NULL;//to store username.
	cout << "\tEnter quantity:";
	//to store password.
	int i = 0;
	char a;//a Temp char
	for (i = 0;;)//infinite loop
	{
		a = getch();//stores char typed in a

		if (a == 27 && i == 0)
		{
			stringstream ss;
			ss << pquantity[iid];
			string con = ss.str();
			strcpy(user, con.c_str());
			cout << user;
			//memcpy(&int, char, sizeof(int));
			break;
		}
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

	iquantity = atoi(user);
}

void e_sprice()
{
	char user[10];
	user[0] = NULL;//to store username.
	cout << "\tEnter sale price:";
	//to store password.
	int i = 0;
	char a;//a Temp char
	for (i = 0;;)//infinite loop
	{
		a = getch();//stores char typed in a
		if (a == 27 && i == 0)
		{
			stringstream ss;
			ss << psprice[iid];
			string con = ss.str();
			strcpy(user, con.c_str());
			cout << user;
			break;
		}

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

	isprice = atoi(user);

}

void e_bprice()
{
	char user[10];
	user[0] = NULL;//to store username.
	cout << "\tEnter buying price:";
	//to store password.
	int i = 0;
	char a;//a Temp char
	for (i = 0;;)//infinite loop
	{
		a = getch();//stores char typed in a
		if (a == 27 && i == 0)
		{
			stringstream ss;
			ss << pbprice[iid];
			string con = ss.str();
			strcpy(user, con.c_str());
			cout << user;
			//memcpy(&int, char, sizeof(int));
			break;
		}
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

	ibprice = atoi(user);

}


