#include<iostream>
using namespace std;
int main()
{
	float l,b,area,peri;
	cout<<"Enter Length of Rectangle : ";
	cin>>l;
	cout<<"Enter Breadth of Rectangle : ";
	cin>>b;
	area = l * b;
	peri = 2 * ( l + b);
	cout<<"Area of Rectangle is : "<<area<<endl;
	cout<<"Perimeter of Rectangle is : "<<peri<<endl;
	return 0;
}
