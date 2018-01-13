#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"
#include"function_define.h"

void addinv()
{
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
	cout << "\r\t\t\t\t\t\t       ADD-INVENTRY" << endl;
	text(15);
	while (true)
	{

		p_name();
		p_quantity();
		p_bprice();
		p_sprice();
		//id->save1();
		save1();
	}

}

