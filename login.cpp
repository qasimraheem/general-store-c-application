#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"
#include"function_define.h"




void user_name()
{
	cout << "\n\t\t\t\t\t\tEnter Username  :";
	//to store password.
	int i = 0;
	char a;//a Temp char
	for (i = 0;;)//infinite loop
	{
		a = getch();//stores char typed in a

					//check if a is numeric or alphabet
		if (a != 8)
		{
			if (a != 13)
			{
				userc[i] = a;//stores a in pass
				++i;
				cout << a;
			}
		}
		if (a == '\b'&&i >= 1)//if user typed backspace
							  //i should be greater than 1.
		{
			cout << "\b \b";//rub the character behind the cursor.
			--i;
		}
		if (a == '\r')//if enter is pressed
		{
			userc[i] = '\0';//null means end of string.
			break;//break the loop
		}
	}


	//here we can even check for minimum digits needed

	/* if(i<=5)
	{
	cout<<"\nMinimum 6 digits needed.\nEnter Again";
	getch();//It was not pausing :p
	goto START;
	}*/


}
void pass_word()
{
	cout << "\n\t\t\t\t\t\tEnter password  :";
	//to store password.
	int i = 0;
	char a;//a Temp char
	for (i = 0;;)//infinite loop
	{
		a = getch();//stores char typed in a

					//check if a is numeric or alphabet
		if (a != 8)
		{
			if (a != 13)
			{
				passc[i] = a;//stores a in pass
				++i;
				cout << "*";
			}
		}
		if (a == '\b'&&i >= 1)//if user typed backspace
							  //i should be greater than 1.
		{
			cout << "\b \b";//rub the character behind the cursor.
			--i;
		}
		if (a == '\r')//if enter is pressed
		{
			passc[i] = '\0';//null means end of string.
			break;//break the loop
		}
	}


	//here we can even check for minimum digits needed

	/* if(i<=5)
	{
	cout<<"\nMinimum 6 digits needed.\nEnter Again";
	getch();//It was not pausing :p
	goto START;
	}*/


}
void login()
{
	system("cls");
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	text(12 on 0);
	cout << "\t\t\t\t\t\t       LOGIN" << endl;
	cout << "\t\t\t\t\t\t     =========\n\n" << endl;
	do
	{
		user_name();
		pass_word();


		if (userc == username&&passc == userpassword)
		{
			for (int i = 0; i < 7; i++)
			{
				cout << "\n";
			}
			for (int i = 0; i < 54; i++)
			{
				cout << " ";
			}
			unsigned char tr = 191, tl = 218, dr = 217, dl = 192, v = 179, h = 196, t = 251, a = 219, b = 178, c = 177, d = 176, e = 0;
			cout << tl << h << h << h << h << h << h << h << tr << endl;
			for (int i = 0; i < 54; i++)
			{
				cout << " ";
			}
			cout << v << " " << d << " " << d << " " << d << " " << v << endl;
			for (int i = 0; i < 54; i++)
			{
				cout << " ";
			}
			cout << dl << h << h << h << h << h << h << h << dr;
			cout << "\r\b\b\r";
			for (int i = 0; i < 54; i++)
			{
				cout << " ";
			}
			cout << v;
			for (int i = 0; i < 3; i++)
			{
				Sleep(120);
				for (int j = 0; j < 5; j++)
				{
					Sleep(150);
					e = a; a = b; b = c; c = d, d = e;
					cout << " " << c << " " << b << " " << a;
					cout << "\b\b\b\b\b\b";
				}
			}

		}
		else
		{
			for (int i = 0; i < 7; i++)
			{
				cout << "\n";
			}
			for (int i = 0; i < 54; i++)
			{
				cout << " ";
			}
			unsigned char tr = 191, tl = 218, dr = 217, dl = 192, v = 179, h = 196, t = 251, a = 219, b = 178, c = 177, d = 176, e = 0;
			cout << tl << h << h << h << h << h << h << h << tr << endl;
			for (int i = 0; i < 54; i++)
			{
				cout << " ";
			}
			cout << v << " " << d << " " << d << " " << d << " " << v << endl;
			for (int i = 0; i < 54; i++)
			{
				cout << " ";
			}
			cout << dl << h << h << h << h << h << h << h << dr;
			cout << "\r\b\b\r";
			for (int i = 0; i < 54; i++)
			{
				cout << " ";
			}
			cout << v;
			for (int i = 0; i < 3; i++)
			{
				Sleep(120);
				for (int j = 0; j < 5; j++)
				{
					Sleep(150);
					e = a; a = b; b = c; c = d, d = e;
					cout << " " << c << " " << b << " " << a;
					cout << "\b\b\b\b\b\b";
				}
			}
			login();
		}
		//	}
	} while (userc != username&&passc != userpassword);

}
