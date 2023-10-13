#include <iostream>
using namespace std;


// A program that will capitalize each word from the string input

int main()
{
	const int size = 80;

	char sentence[size];

	cout << "Enter A String: \n";
	cin.getline(sentence, size); // make sure limit is not excedded

	sentence[0] = toupper(sentence[0]);

	for (int i = 1; i < size; i++)
	{
		if (sentence[i - 1] == ' ')
			sentence[i] = toupper(sentence[i]);
		else
			sentence[i] = tolower(sentence[i]);
	}

	cout << sentence << endl;

	system("pause");
	return 0;
}


