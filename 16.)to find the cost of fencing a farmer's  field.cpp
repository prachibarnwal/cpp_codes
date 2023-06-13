/*
A farmer has a rectangular field of certain length & breadth.
If it costs Rs 50 to fence per meter of the field.
What will be the total cost ?
*/
#include<iostream>
using namespace std;
int main()
{
	int length, breadth, peri, cost;
	cout<<"Enter Length of the Field (in m) : ";
	cin>>length;
	cout<<"Enter Breadth of the Field (in m): ";
	cin>>breadth;
	peri = 2 * (length+breadth);
	cost = 50 * peri;
	cout<<"The Total Cost(in rupees) for Fencing of the Farmer's Field is "<<cost;
	return 0;
}
