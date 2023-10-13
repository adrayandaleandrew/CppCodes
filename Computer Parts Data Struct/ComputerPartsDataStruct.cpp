#include <iostream>
#include <cstring>

using namespace std;


struct 
{
	string Brand;
	string Type;
	string MonitorSize;
	double HardDriveSize;
	double MemorySize;
	string ChassisColor;
	string VideoCardModel;
}	comp[2];

int main ()
{
	int i;
	for (int i = 0; i<2; i++)
	{
		cout << "Please Enter A Brand (Dell, HP, Lenovo): ";
		cin >> (comp[i].Brand);
		
		cout << "PLease Enter A Type (Desktop or Laptop or Tablet): ";
		cin >> (comp[i].Type);
		
		cout << "Please Enter MonitorSize (in Inches): ";
		cin >> (comp[i].MonitorSize);
		
		cout << "Please Enter HardDriveSize(TB): ";
		cin	>>	(comp[i].HardDriveSize);
		
		cout << "Please Enter Case Color : ";
		cin >> (comp[i].ChassisColor);
		
		cout << "Please Enter Memory Size (GB) : ";
		cin	>>	(comp[i].MemorySize);
		
		cout << "Please Enter Video Card Model (Nvidia or AMD): ";
		cin >> (comp[i].VideoCardModel);
		
		cout << "\n";
		cout << "\n";
		
	}
		for(int i = 0; i < 2; i++)
	{
		cout << "Specifications of computer "<< i + 1 << endl;
		cout << "Brand: " << comp[i].Brand << endl;
		cout << "Type: " << comp[i].Type << endl;
		cout << "Size of Monitor: " << comp[i].MonitorSize << endl;
		cout << "Size of Hard Drive: " << comp[i].HardDriveSize << endl;
		cout << "Chassic Color: " << comp[i].ChassisColor<< endl;
		cout << "Memory Size: " << comp[i].MemorySize << endl;
		cout << "Video Card Model: "<< comp[i].VideoCardModel << endl;
		cout << "\n";
		cout <<endl;
	}
	

		
	return 0;
}
