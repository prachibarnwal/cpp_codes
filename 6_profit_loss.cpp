/*
to input cost price and selling price of a product and print
if there is a profit or loss
*/
#include<iostream>
using namespace std;
int main()
{
	int cp,sp,res;
	cout<<"Enter Cost Price : ";
	cin>>cp;
	cout<<"Enter Selling Price : ";
	cin>>sp;
	((sp - cp) > 0)? cout<<"Profit" : cout<<"LOSS";
	cout<<"\n\n"; 
	return 0;
}

