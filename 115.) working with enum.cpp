#include<iostream>
using namespace std;
enum operation{add=1,subtract,product,divide};

int main()
{
	float a,b,res;
	int ch;
	cout<<"Enter Two Numbers : ";
	cin>>a>>b;
	cout<<"Press 1 : add; Press 2 : substract; Press 3 : multiply; Press 4 : Divide; == ";
	cin>>ch;
	switch(ch)
	{
		case divide:
			res = a/b;
			cout<<"Quotient is : "<<res<<endl;
			break;
		case add:
			res = a+b;
			cout<<"Sum is : "<<res<<endl;
			break;
		case product:
			res = a*b;
			cout<<"Product is : "<<res<<endl;
			break;
		case subtract:
			res = a-b;
			cout<<"Difference is : "<<res<<endl;
			break;
	}
	
	return 0;
}
