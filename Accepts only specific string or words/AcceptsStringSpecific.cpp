#include <iostream>
#include <cstring>
#include <string>
using namespace std;


// A program that will enter a username and password set as "admin" & "password" value respectively

int main()
{
	char user[] = "admin";
	char pass[] = "secret";
	char inputuser[10];
	char inputpass[10];
	string loop = "yes";
	int access = 1;

	cout << "USERNAME: ";
	cin >> inputuser;
	cout << "PASSWORD: ";
	cin >> inputpass;

	for (int i = 0; i < strlen(inputuser); i++)
	{
		if (user[i] == inputuser[i])
		{
			access = 1;
		}
		else
		{
			cout << "Access Denied!" << endl;
			do
			{
				cout << "Do you want to try again? (yes or no): ";
				cin >> loop;
				if (loop == "no")
				{
					return 0;
				}
				if (loop == "yes")
				{
					return main();
				}
				else
				{
					cout << "Please enter a valid answer. (yes or no)";
				}
			} while (i = 0);
		}
	}
	for (int i = 0; i < strlen(inputpass); i++)
	{
		if (pass[i] == inputpass[i])
		{
			access = 1;
		}
		else
		{
			cout << "Access Denied!" << endl;
			do
			{
				cout << "Do you want to try again? (yes or no): ";
				cin >> loop;
				if (loop == "no")
				{
					return 0;
				}
				if (loop == "yes")
				{
					return main();
				}
				else
				{
					cout << "Please enter a valid answer. (yes or no)";
				}
			} while (i = 0);
		}
	}

	if (access == 1)
	{
		cout << "Access Granted! \n";
		system("pause");
		return 0;

	}

}
