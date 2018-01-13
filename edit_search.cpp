#include"stdafx.h"
#include"Header.h"
#include"global_variables.h"
#include"function_define.h"
#include"structs.h"
extern struct bill b[100];


void edit_search()
{
	int  role;
	char home;
	char searchroll[3];

	cout << "\r    Enter product id:    \b\b\b\b";

	do {

		cin >> searchroll;

		if (searchroll[0] == 'a'&&searchroll[1] == 'l'&&searchroll[2] == 'l')
		{
			//searchall();
			//cout << "Enter product id:";
		}
		else
		{
			role = atoi(searchroll);
			if (pid[role] == 0 || role>100 || role <= 0)
			{
				do {
					text(14);
					cout << "\tItem don,t exists!\tDo you want to go back Y/N:\a";

					text(14);
					home = getch();
					text(15);
					for (int i = 0; i<50; i++)
					{
						cout << " \b\b";
					}
					cout << "\r";
					if (home == 'Y' || home == 'y')
					{
						text(15);
						start();

					}
					else if (home == 'N' || home == 'n')
					{
						text(15);

						cout << "    Enter product id:";
						text(15);
					}

				} while (home != 'y'&&home != 'Y'&&home != 'n'&&home != 'N');

			}


		}
	} while (role>100 || role <= 0 || pid[role] == 0);

	iid = role;
}