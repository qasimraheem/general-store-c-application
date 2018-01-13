#pragma once
#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"


extern struct bill
{
public:
	int b_id;
	int b_pid[100];
	string b_name[100];
	int b_quantity[100];
	int b_price[100];
	int b_ptotal[100];
	int b_total;
	int b_totalitems;
	string b_y;
	string b_m;
	string b_d;
	string b_t;

}b[100];