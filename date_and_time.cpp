#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"
#include"function_define.h"



void currentDateTime() {
	time_t     now = time(0);
	struct tm  tstruct;
	int nun = 0;
	tstruct = *localtime(&now);
	strftime(y, sizeof(y), "%Y", &tstruct);
	strftime(m, sizeof(m), "%m", &tstruct);
	strftime(d, sizeof(d), "%d", &tstruct);
	strftime(t, sizeof(t), "%X", &tstruct);

}