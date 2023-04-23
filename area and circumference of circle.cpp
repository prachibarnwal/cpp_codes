//area and circumference of a circle
#include<iostream>
using namespace std;
int main()
{
	float radius,area,cir;
	cout<<"Enter Radius of the Circle : ";
	cin>>radius;
	area = 3.14 * radius * radius;
	cir = 2 * 3.14 * radius;
	cout<<"Area of Circle is : "<<area<<endl;
	cout<<"Circumference of Circle is : "<<cir<<endl;
	return 0;
}
