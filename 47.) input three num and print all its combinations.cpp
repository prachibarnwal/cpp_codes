//wap to input three numbers and print all its combinations
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter Three Numbers : ";
	cin>>a>>b>>c;
	cout<<"All Possible Combinations Are : ";
	cout<<a*100 + b * 10 + c<<" ";
	cout<<a*100 + c* 10 + b<<" ";
	cout<<b*100 + a * 10 + c<<" ";
	cout<<b * 100 + c*10 + a<<" ";
	cout<<c*100 + b * 10 + a<<" ";
	cout<<c*100 + a* 10 + b<<endl;
	return 0;
}
