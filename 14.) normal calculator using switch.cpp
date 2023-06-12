#include<iostream>
using namespace std;
int main()
{
	float n1,n2,res;
	int ch;
	cout<<"Enter any two numbers : ";
	cin>>n1>>n2;
	cout<<" Press 1 - Add \n Press 2 - Subtract \n Press 3 - Multiply \n Press 4 - Divide \n";
	cout<<"Enter Your Choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
		res = n1+n2;
		cout<<"Sum is "<<res<<endl;
		break;
		case 2:
		if (n1 > n2)
			res = n1-n2;
		else
			res = n2-n1;
		cout<<"Difference is "<<res<<endl;
		break;
		case 3:
		res = n1*n2;
		cout<<"Product is "<<res<<endl;
		break;
		case 4:
		res = n1/n2;
		cout<<"Quotient is "<<res<<endl;
		break;
		default:
		cout<<"Invalid Option Pressed -__-"<<endl;
	}
	return 0;
}
