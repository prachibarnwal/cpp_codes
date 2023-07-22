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
		cout<<"Enter Cost Quantity and Product Name : ";
		cin>>a[i].cost>>a[i].qty>>a[i].name;
		cout<<"Product "<<i+1<<" : "<<endl;
		a[i].amount = a[i].cost*a[i].qty;
		bill += a[i].amount;
		cout<<a[i].name<<" having quantity "<<a[i].qty<<" of Price "<<a[i].cost<<" has a total amount of "<<a[i].amount<<endl;
	}
	cout<<"Total bill to be Payed : "<<bill;
}
