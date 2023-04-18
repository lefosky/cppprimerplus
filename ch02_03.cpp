// ch02_03.cpp
/*
Q:Write a C++ program that uses three user-defined functions (counting main() as one) and produces the following output:

 Three blind mice 
 Three blind mice 
 See how they run 
 See how they run

One function, called two times, should produce the first two lines, and the remain-
ing function, also called twice, should produce the remaining output.
*/

#include <iostream>
using namespace std;

void threeMice();
void run();

int main()
{
	threeMice();
	threeMice();
	run();
	run();
	
	return 0;
}

void threeMice()
{
	cout<<"Three blind mice\n";
}

void run()
{
	cout<<"See how they run\n";
}
