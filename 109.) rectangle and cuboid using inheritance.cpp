//single inheritance
#include<iostream>
using namespace std;
class Rectangle
{
	protected:
		int l,b;
		public:
			void input()
			{
				cout<<"Enter Length : ";
				cin>>l;
				cout<<"Enter Breadth : ";
				cin>>b;
			}
			void show()
			{
				cout<<"Length is : "<<l<<endl;
				cout<<"Breadth is : "<<b<<endl;
			}	
			void area()
			{
				cout<<"Area of Rectangle is : "<<l*b<<endl;
			}	
};
class Cuboid:public Rectangle
{
	int h;
	public:
		void input()
		{
			Rectangle::input();
			cout<<"Enter Height : ";
			cin>>h;
		}
		void show()
		{
			Rectangle::show();
			cout<<"Height is : "<<h<<endl;
		}
		void area() // function overriding
		{
			cout<<"Area of Cuboid is : "<<2 * (l*b + b*h + h*l)<<endl;
		}
};
int main()
{
	cout<<"    Inheritance"<<endl;
	Rectangle r;
	Cuboid c;
	r.input();
	r.show();
	c.input();
	c.show();
	c.area();
	return 0;
}
