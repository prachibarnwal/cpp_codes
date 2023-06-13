/*
Milege of a car is 12 km/hr. 
You have to cover a distance of 280 km.
How much petrol should You have in your Car.
*/
#include<iostream>
using namespace std;
int main()
{
	int milege, distance;
	float vol;
	cout<<"Enter Milege of the Car : ";
	cin>>milege;
	cout<<"Enter Distance : ";
	cin>>distance;
	vol = distance / float(milege);
	cout<<"Volume of Petrol(in litres) that the Car should have : "<<vol<<endl;
	
	return 0;
}
