/*
to input number of products and input cost, qty, prodict name and show the bill 
*/
#include<iostream>
using namespace std;
struct Product
{
	int cost;
	char name[50];
	int qty,amount;
};
int main()
{
	Product a[5];
	int bill=0,i,n;
	cout<<"Enter Number of Products : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter Cost : ";
		cin>>a[i].cost;
		cout<<"Enter Quantity : ";
		cin>>a[i].qty;
		cout<<"Enter Product Name : ";
		cin>>a[i].name;
		a[i].amount = a[i].cost*a[i].qty;
		bill += a[i].amount;
		
	}
	cout<<"NAME\t\tCOST\t\tQTY\t\tAmount"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i].name<<"\t\t"<<a[i].cost<<"\t\t"<<a[i].qty<<"\t\t"<<a[i].amount<<endl;
	}
	cout<<"Total bill to be Payed : "<<bill;
	return 0;
}
