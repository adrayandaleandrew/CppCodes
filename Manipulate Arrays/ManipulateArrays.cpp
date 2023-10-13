#include <iostream>
using namespace std;

void display();
int odd();
int sum();
void places();
int divide();


int main()
{
	
	display();
	int choice;
	 
	cout << endl;
	cout << endl;
	
	
	cout << "CHOOSE " << endl;
	cout << "[1] remove all odd numbers " << endl;
	cout << "[2] sum of two elements" << endl;
	cout << "[3] Switch places " << endl;
	cout << "[4] Divide even the numbers by two and one to odd numbers " << endl;
	cin >> choice;
	
	switch(choice)
	{
		case 1:
			odd();
			break;
		case 2: 
			sum();
			break;
		case 3:
			places();
			break;
		case 4:
			divide();
			break;
				
	}
}

void display(void)
{
	int arr[8];
	
	arr[0] = 4;
	arr[1] = 8;
	arr[2] = 10;
	arr[3] = 1;
	arr[4] = 6;
	arr[5] = 3;
	arr[6] = 7;
	arr[7] = 2;
	
	for(int i=0; i < 8; i++)
	{
		cout << "["<< arr[i] << "] ";
	}
	
}

int odd()
{
	system("cls");
	int num;
	int arr[8] = {4,8,10,1,6,3,7,2};
	
	for(num = 0; num < 8; num++)
	{
		if(arr[num]%2 == 0)
		{
		
		 cout << "[" << arr[num] << "] ";
		}
		else
		{
			continue;	
		}
	}
}

int sum()
{
	system("cls");
	
	int arr[8] = {4,8,10,1,6,3,7,2};
	int sum1,sum2,sum3,sum4;
	
	sum1 = arr[0] + arr[1];
	sum2 = arr[2] + arr[3];
	sum3 = arr[4] + arr[5];
	sum4 = arr[6] + arr[7];
	
	cout << "[" << sum1 << "]" <<endl;
	cout << "[" << sum2 << "]" <<endl;
	cout << "[" << sum3 << "]" <<endl;
	cout << "[" << sum4 << "]" <<endl;
}

void places()
{
	
}

int divide()
{	
int num;
int arr[8] = {4,8,10,1,6,3,7,2};
	
	for(num = 0; num < 8; num++)
	{
		if(arr[num]%2 == 0)
		{
		 	cout <<"["<<arr[num]/2<<"]" ;
		}
		else
		{
	     	cout <<"["<<arr[num]+1<<"]" ;
		}
	}

}


