#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"
#include"function_define.h"
#include"main_variables.h"
#include"structs.h"
extern struct bill b[100];

using namespace std;


void q_number()
{
	char user[10];
	user[0] = NULL;//to store username.
	cout << "\tEnter numbers  :";
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
		}
		if (a == '\r'&&user[0] != '\0')//if enter is pressed
		{
			user[i] = '\0';//null means end of string.
			break;//break the loop
		}
	}

	iquantity = atoi(user);
	//here we can even check for minimum digits needed

	/* if(i<=5)
	{
	cout<<"\nMinimum 6 digits needed.\nEnter Again";
	getch();//It was not pausing :p
	goto START;
	}*/


}



void start()
{

	while (true)
	{
		system("CLS");
		clean();
		cleanbill();
		read();
		read_bill();
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
		std::cout << "\r\t\t\t\t\t\t  WELCOME TO COLD STORE" << endl;

		text(15);
		cout << "\n\t\t\t\t\t\t      ";
		text(8);
		cout << "1.ADD-INVENTRY";
		text(15);
		cout << "\n\t\t\t\t\t\t      ";
		text(8);
		cout << "2.SALE-PRODUCTS";
		text(15);
		cout << "\n\t\t\t\t\t\t      ";
		text(8);
		cout << "3.SHOW-INVENTRY";
		text(15);
		cout << "\n\t\t\t\t\t\t      ";
		text(8);
		cout << "4.BILL-REPORT" << endl;
		text(15);
		char opt;
		cin >> opt;
		if (opt == '1')
		{
			system("CLS");
			addinv();
		}
		if (opt == '2')
		{
			system("CLS");
			sale_product();
		}
		if (opt == '3')
		{
			system("CLS");
			show_inventry();


		}
		if (opt == '4')
		{
			showbills();
		}
	}

}
int main()
{
	system("CLS");
	read_setup();
	if (productkey != "xxxx-yyyy-xxxx-yyyy")
	{
		setup_agrement();
	}
	else
	{
		login();
	}
	clean();
	cleanbill();
	read();
	read_bill();
	start();

	return 0;
}