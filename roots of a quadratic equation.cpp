//roots of a quadratic equation
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,d,r1,r2;
	cout<<"Enter Values of A, B and C : ";
	cin>>a>>b>>c;
	d = b * b - 4 * a * c;
	if(d<0)
	cout<<"No real roots";
	if (d == 0)
	{
		cout<<"Equal real roots are : ";
		r1 = r2 = -b / (2 * a);
		cout<<r1<<" and "<<r2<<endl;
	
	}
	if (d > 0)
	{
		cout<<"Unequal Real Roots Are : ";
		r1 = (-b + sqrt(d)) / (2 * a);
		r2 = (-b - sqrt(d)) / (2 * a);
		cout<<r1<<" and "<<r2;
	}
	return 0;
}
