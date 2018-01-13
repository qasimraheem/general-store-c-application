#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"
#include"function_define.h"
#include"structs.h"

void edit_inventry()
{
	while (true)
	{
		edit_search();
		text(15 on 4); cout << "\nP_ID    ";
		text(15 on 9); cout << "P_NAME                          ";
		text(0 on 8); cout << "P_QUANTITY      ";
		text(0 on 14); cout << "P_BYING PRICE   ";
		text(0 on 13); cout << "P_SALE PRICE    ";
		text(0 on 11); cout << "P_SALED         ";
		text(0 on 10); cout << "P_PROFIT        " << endl; text(15);

		if (pprofit[iid] <= 0)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t"; text(0 on 12); cout << "                \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";  cout << pprofit[iid] << "$"; text(15);
		}
		else
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t"; text(0 on 10); cout << "                \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";  cout << pprofit[iid] << "$"; text(15);
		}
		cout << "\r\t\t\t\t\t\t\t\t\t\t\t"; text(0 on 11); cout << "                \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"; cout << psaled[iid]; text(15);
		cout << "\r\t\t\t\t\t\t\t\t\t"; text(0 on 13); cout << "                \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"; cout << psprice[iid]; text(15);
		cout << "\r\t\t\t\t\t\t\t"; text(0 on 14); cout << "                \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";  cout << pbprice[iid]; text(15);
		cout << "\r\t\t\t\t\t"; text(0 on 8); cout << "                \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"; cout << pquantity[iid]; text(15);
		cout << "\r\t"; text(15 on 9); cout << "                                \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"; cout << pname[iid]; text(15);
		cout << "\r"; text(15 on 4); cout << "        \b\b\b\b\b\b\b\b"; cout << pid[iid] << endl; text(15);

		cout << "ENTER FOR EDIT" << endl;
		e_name();
		e_quantity();
		e_bprice();
		e_sprice();
		cout << endl;
		save2();
	}

}