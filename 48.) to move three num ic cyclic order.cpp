// to move three integers in cyclic order using a function
#include<iostream>
using namespace std;
void cyclic(int a, int b, int c);
int main()
{
	int a,b,c;
	cout<<"Enter Three Numbers : ";
	cin>>a>>b>>c;
	cyclic(a,b,c);
	return 0;
}
void cyclic(int a, int b, int c)
{
	int temp;
	temp = a;
	a = b;
	b = c;
	c = temp;
	cout<<"Integers Moved in Cyclic Order : "<<a<<b<<c<<endl;
}
