#include <iostream>

using namespace std;

char x[20] [10];

int row;
int col;

void initarray();
void display();
void reserve();
void check();
void price();

int main()
{
	initarray();
	char ans;
	
	cout << "Welcome to the cinemas! Would you like to reserve a seat? (y/n)" << endl;
	cin >> ans;
	if(tolower(ans) == 'y')
	{
		while(1)
		{
			char q;
			display();
			reserve();
			check();
			price();
			
			cout << "Would you like to reserve again?" << endl;
			cin >> q;
			if(tolower(q) == 'n')
			{
				break;
			}
		}
		system("cls");
		cout << "Thank you! Please come again.";
		return 0;	
	}
	else
	{
		system("cls");
		cout << "Thank you! Please come again.";
		return 0;		
	}
}

void initarray()
{
	for(int i = 0; i < 20; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			x[i][j] = '-';
		}
	}	
}

void display()
{
	system("cls");
	cout << "The next screen will display the seats in the cinema that are not yet taken.('-' = vacant, 'x' = taken)" << endl;
	system("pause");
	system("cls");
	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "-------------------------------------THEATER--------------------------------------" << endl;
	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "	1	2	3	4	5	6	7	8	9	10" << endl;;
	cout << endl;
	for(int i = 0; i < 20; i ++)
	{
		cout << i+1 << "	" << x[i][0] << "	" << x[i][1] << "	" << x[i][2] << "	" << x[i][3] << "	" << x[i][4] << "	" << x[i][5] <<
		"	" << x[i][6] <<"	" << x[i][7] << "	" << x[i][8] << "	" << x[i][9] << endl;
		cout << endl;
	}
}

void reserve()
{
	cout << "In what row would you like to be seated in?" << endl;
	cin >> row;
	cout << "In what column would you like to be seated in?" << endl;
	cin >> col;
}

void check()
{
	if(x[row-1][col-1] == '-')
	{
		x[row-1][col-1] = 'x';
		cout << "You have successfully reserved your seat." << endl;
	}
	else
	{
		cout << "Sorry, that seat is already taken." << endl;
	}	
}

void price()
{
	if(row <= 3)
	{
		cout << "The price of your ticket is Php 1200" << endl;
	}
	else if(row <= 8 && row > 3)
	{
		cout << "The price of your ticket is Php 800" << endl;
	}
	else if(row <= 13 && row > 9)
	{
		cout << "The price of your ticket is Php 400" << endl;
	}
	else if(row <= 20 && row > 14)
	{
		cout << "The price of your ticket is Php 200" << endl;
	}
	
}
