#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"
#include"function_define.h"
#include"structs.h"
extern struct bill b[100];

void read_bill()
{
	std::ifstream ifs("bill.xls");

	if (ifs.is_open())
	{
		int rb_id, rp_id, rquantity, rprice, rtotal_items, rsaled, rtotal_price;
		string rname, ry, rm, rd, rt;
		while (!ifs.eof())
		{
			ifs >> rb_id;
			ifs >> ry;
			ifs >> rm;
			ifs >> rd;
			ifs >> rt;
			ifs >> rp_id;
			ifs >> rname;
			ifs >> rquantity;
			ifs >> rprice;
			ifs >> rtotal_items;
			ifs >> rtotal_price;

			//cout<<rb_id<<"\t"<<rp_id<<"\t"<<rname<<"\t"<<rquantity<<"\t"<<rprice<<"\t"<<rtotal_items<<"\t"<<rtotal_price<<endl;
			if (rb_id>0)
			{
				b[rb_id].b_id = rb_id;
				b[rb_id].b_y = ry;
				b[rb_id].b_m = rm;
				b[rb_id].b_d = rd;
				b[rb_id].b_t = rt;
				b[rb_id].b_pid[rp_id] = rp_id;
				b[rb_id].b_name[rp_id] = rname;
				b[rb_id].b_quantity[rp_id] = rquantity;
				b[rb_id].b_price[rp_id] = rprice;
				b[rb_id].b_totalitems = rtotal_items;
				b[rb_id].b_total = rtotal_price;

			}

		}
		ifs.close();

	}
	else {
		// show message:
		std::cout << "Error opening file";
	}

}