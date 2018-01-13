#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"
#include"function_define.h"
#include"structs.h"
extern struct bill b[100];

void read()
{
	std::ifstream ifs("store.xls");

	if (ifs.is_open())
	{
		int rid, rquantity, rsprice, rbprice, rsaled, rprofit;
		string rname;
		while (!ifs.eof())
		{
			ifs >> rid;
			ifs >> rname;
			ifs >> rquantity;
			ifs >> rbprice;
			ifs >> rsprice;
			ifs >> rsaled;
			ifs >> rprofit;

			//	cout<<roll<<"\t"<<sfnam<<"\t"<<ssnam<<"\t"<<ffnam<<"\t"<<fsnam<<"\t"<<rclass<<"\t"<<num<<endl;
			if (rid>0)
			{
				pid[rid] = rid;
				pname[rid] = rname;
				pquantity[rid] = rquantity;
				pbprice[rid] = rbprice;
				psprice[rid] = rsprice;
				psaled[rid] = rsaled;
				pprofit[rid] = rprofit;
			}
		}
		ifs.close();

	}
	else {
		// show message:
		std::cout << "Error opening file";
	}

}