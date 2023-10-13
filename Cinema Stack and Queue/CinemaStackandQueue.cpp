#include<iostream>
#include <string>
#include <list>
#include <stack>
#include <queue>
using namespace std;

int main()
{

	//Creating doubly linked list 
	list <string> reservationlist;
	for(int i = 0; i < 10; i ++)0;
	{
		string name;
		cout << "Enter name: " ;
		cin >> name;
		reservationlist.push_back(name);
	}
	
	//Displaying of reservationlist
	cout << "--------------------" << endl;
	for(auto it = reservationlist.begin(); it != reservationlist.end(); it++)
	{
		cout << *it << endl;
	}
	
	//Creating queue for movieQueue
	queue<string> movieQueue;
	
	//Placing linked list into queues
	for(int i = 0; i <= 5; i ++)
	{
		movieQueue.push(reservationlist.front());
		movieQueue.push(reservationlist.back());
		reservationlist.pop_front();
		reservationlist.pop_back();
	}
	
	//Displaying Queue and creating stack
	stack<string> exitQueue;
	cout << "--------------------" << endl;
	for(int i = 0; i < 10; i++)
	{
		cout << movieQueue.front() << endl;
		exitQueue.push(movieQueue.front());
		movieQueue.pop();
	}
	
	//Displaying stack
	cout << "--------------------" << endl;
	for(int i = 0; i < 10 ; i ++)
	{
		cout << exitQueue.top() << endl;
		exitQueue.pop();
	}
	
	return 0;
}

