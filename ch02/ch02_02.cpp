// ch02_02.cpp
// Q:Write a C++ program that asks for a distance in furlongs and converts it to yards.
//  (One furlong is 220 yards.)

#include <iostream>
using namespace std;

int main()
{
	int fl = 0;
	cout<<"Input the distance in furlongs:";
	cin>>fl;
	cout<<fl<<" furlong(s) is "<< fl*220<<" yards.";
	cout<<endl;
	return 0;
}
