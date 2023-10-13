#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

FILE *file1 = NULL;
void add();
void view();

struct RECORDS
{
	char Nickname[100];
	double Age;
	double bestscore1;
	double bestscore2;
}PLAYERS[6];



int main()
{
	int choice;

	cout << "===========================================" << endl;
	cout <<	"		MENU" << endl;
	cout << "===========================================" << endl;
	cout << "1. Add Records" << endl;
	cout << "2. View Records" << endl;
	cout << "3. Compute Average" << endl;
	cout << "4. Show the player(s) who gets the max average." << endl;
	cout << "5. Show the player(s) who gets the min average." << endl;
	cout << "6. Exit" << endl;
	cout << "Please Enter A Choice(1-6):" << endl;
	cin >> choice;

	switch (choice)
	{
		case 1:
		{
			add();
			break;
		}
		case 2:
		{
			view();
			break;
		}
	}
}


void add()
{
	int i;
	file1 = fopen("C:/Users/ddadrayan/Downloads/MyRecords.txt", "w");
	fflush(stdin);
	for (i=0; i<6; i++)
	{
		cout << "Enter Nickname: " << endl;
		cin >> PLAYERS[i].Nickname;
		fprintf(file1, "Nickname: %s\n", PLAYERS[i].Nickname);
		
		cout << "Enter Age: " <<endl;
		cin >> PLAYERS[i].Age;
		fprintf(file1, "Age: %f\n", PLAYERS[i].Age);
		
		cout << "Enter Best Score: " << endl;
		cin >> PLAYERS[i].bestscore1;
		fprintf(file1, "Best Score: %f\n", PLAYERS[i].bestscore1);
		
		cout << "Enter Best Score: " << endl;
		cin >> PLAYERS[i].bestscore2;
		fprintf(file1, "Best Score: %f\n", PLAYERS[i].bestscore2);
	}
	fclose(file1);
		main();
}

void view()
{
	int i;
	
	file1 = fopen("C:/Users/ddadrayan/Downloads/MyRecords.txt", "r");
	
	system ("cls");
	cout << endl;
	
	for (i=0; i<6; i++)
	{
			fscanf (file1, "\t%s\t", PLAYERS[i].Nickname);
			cout << PLAYERS[i].Nickname <<"\t" << endl;
		
			fscanf (file1, "\t%f\t",&PLAYERS[i].Age);
			cout << PLAYERS[i].Age << "\t" << endl;
		
			fscanf (file1, "\t%f\t",&PLAYERS[i].bestscore1);
			cout << PLAYERS[i].bestscore1 << "\t" << endl;
		
			fscanf (file1, "\t%f\t",&PLAYERS[i].bestscore2);
			cout << PLAYERS[i].bestscore2 << "\t" << endl;
		fclose (file1);
		i++;
	}

	main();
}

