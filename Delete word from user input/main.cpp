#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;


// Delete word from user input

int main()
{

	int i, x = 0, y = 0, count = 0;
	char str[100], str1[10][20], word[50];
	cout << "Enter the String : ";
	cin.getline(str, 100);



	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			str1[y][x] = '\0';
			y++;
			x = 0;
		}
		else
		{
			str1[y][x] = str[i];
			x++;
		}
	}
	str1[y][x] = '\0';
	cout << "Enter a word to be delete : ";
	cin >> word;

	for (i = 0; i<y + 1; i++)
	{
		if (strcmp(str1[i], word) == 0)
		{
			for (x = i; x<y + 1; x++)
			{
				strcpy(str1[x], str1[x + 1]);
				y--;
			}
		}

	}
	cout << "The new string after deleting the word : " << endl;
	for (i = 0; i<y + 1; i++)
	{
		cout << str1[i] << " ";
	}
	getch();
}