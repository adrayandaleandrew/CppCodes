#include <iostream>
#define SIZE 10
using namespace std;

int n[SIZE] = {10};
int index;

// Display
void display()
{
	for (int i = 0; i < index; i++)
	{
		cout << n[i] << " ";
	}
}
// Check if full or not 
bool isFull()
{
	if(index==n[10])
	return 1;
	else
return 0; 
}
// Check if empty or not
bool isEmpty()
{
if (index == 0) return true;
return false;
}

void QueuePaper()
{
	if(n[0] == n[0]){
		system("cls");
		printf("FEU-TECH Printing Services\n\n");
		cout<<n[0]<<" has been scanned and printed and now has a watermark.";
		int i = 0;
		if(n[i] != n[1] )
		{
		n[i] = n[1];
		index--;	
		}
		if(n[1] != n[2] )
		{
		n[1] = n[2];
		}
		if(n[2] != n[3] )
		{
			n[2] = n[3];
		}
		if(n[3] != n[4] )
		{
			n[3] = n[4];
		}
		if(n[4] != n[5] )
		{
			n[4] = n[5];
		}
		if(n[5] != n[6] )
		{
			n[5] = n[6];
		}
		if(n[6] != n[7] )
		{
			n[6] = n[7];
		}
		if(n[7] != n[8] )
		{
			n[7] = n[8];
		}
		if(n[8] != n[9] )
		{
			n[8] = n[9];
		}
		if(n[9] != n[10] )
		{
			n[9] = n[10];
		}
	}
}

// Menu
void menu()
{
printf("[A] - Paper Stack\n");
printf("[B] - Queue Stack\n");
printf("[D] - Display\n");
printf("[X] - Exit\n");
printf("---------------\n");
printf("Enter your choice: ");
}


// editing Menu or setup
int main() 
{

	index = 0;
	while (1)
	{
	char option;
	int num;
	system("cls");
	menu();
	cin >> option;
	switch(option)
		{
			case 'a':
	case 'A':
	cout << "Paper Stack\n";
	cout << "Enter Paper ID Number: ";
	cin >> num;
		n[index++] = num;
			break;
case 'b':
case 'B':
	cout << "Queue Stack\n";
	system("cls");
	printf("FEU-TECH Printing Services\n\n");
		cout << "SCAN AND PRINT\n";
		if(isEmpty())
		{
			cout<<"\nThere are no papers to scan and print.";
		}
		else
		{
			cout<<"Paper ID stack: ";
			display();
			cout<<"\n\nPaper "<<n[0]<<" is now being processed...\n\n";
			system("pause");
			QueuePaper();
		}
	break;
case 'd':
case 'D':
cout << "DISPLAY\n";
system("cls");
		printf("FEU-TECH Printing Services\n\n");
		cout << "Existing Paper ID numbers: "; 
		if(isEmpty())
		{ 
			cout << "Paper stack is Empty!";
		}
		if(isFull())
		{
			display();
			cout<<"\n\nPaper stack is Full!";
		}
		else 
		{
			display();
		}
			break;
case 'x':
case 'X':
cout << "EXIT";
system("cls");
				printf("FEU-TECH Printing Services\n\n");
				cout << "Please don't come back~"; 
				cout << endl << "Thank You!";
				exit(1);
				break;	
			default:
				cout << "Invalid Input!";
exit(1);
break; 
cout << "INVALID INPUT!";
}
//print("%d", option);
system("pause>0");
}\
return 0;
}
