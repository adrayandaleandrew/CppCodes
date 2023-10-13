#include <iostream>
using namespace std;

int x[5][5];
int i;
int j;
void array();

void array()
{
	for (i = 0; i < 5; i++)
	{
		for (j =0 ; j < 5; j++)
		{
			cin >> x[i][j];
		}
	}
}
int main()
{
	int row1,row2,row3,row4,row5;
	int col1,col2,col3,col4,col5;
	int totalrows;
	int totalcol;
	cout << "Enter Numbers : "; 
	array();
	
	row1 = x[0][0] + x[0][1] + x[0][2] + x[0][3] + x[0][4];
	row2 = x[1][0] + x[1][1] + x[1][2] + x[1][3] + x[1][4];
	row3 = x[2][0] + x[2][1] + x[2][2] + x[2][3] + x[2][4];
	row4 = x[3][0] + x[3][1] + x[3][2] + x[3][3] + x[3][4];
	row5 = x[4][0] + x[4][1] + x[4][2] + x[4][3] + x[4][4];
	
	col1 = x[0][0] + x[1][0] + x[2][0] + x[3][0] + x[4][0];
	col2 = x[0][1] + x[1][1] + x[2][1] + x[3][1] + x[4][1];
	col3 = x[0][2] + x[1][2] + x[2][2] + x[3][2] + x[4][2];
	col4 = x[0][3] + x[1][3] + x[2][3] + x[3][3] + x[4][3];
	col5 = x[0][4] + x[1][4] + x[2][4] + x[3][4] + x[4][4];
	
	cout << "first row " << row1 << endl;
	cout << "second row" << row2 << endl;
	cout << "third row" << row3 << endl;
	cout << "fourth row" << row4 << endl;
	cout << "fifth row " << row5 << endl;
	
	cout << "first column " << col1 << endl;
	cout << "second column" << col2 << endl;
	cout << "third column" << col3 << endl;
	cout << "fourth column" << col4 << endl;
	cout << "fifth column " << col5 << endl;
	
	totalrows = row1 + row2 +row3 + row4 + row5;
	totalcol = col1 + col2 + col3 + col4 + col5;
	cout << totalrows << endl;
	cout << totalcol << endl;
	return 0;
}
