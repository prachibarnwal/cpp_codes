//multilevel inheritance
#include<iostream>
using namespace std;
class Circle
{
	protected:
	float r;
	public:
	void input()
	{
		cout<<"Enter the Readius (in metres) : ";
		cin>>r;
	}
	void show()
	{
		cout<<"Radius is : "<<r<<" m"<<endl;
	}	
	void area()
	{
		cout<<"Area of Circle is : "<<3.14 * r * r<<"m^2"<<endl;
	}
};
class Cylinder:public Circle
{
	protected:
	float h;
	public:
	void input()
	{
		Circle::input();
		cout<<"Enter Height (in metres) : ";
		cin>>h;
	}
	void show()
	{
		Circle::show();
		cout<<"Height is : "<<h<<" m"<<endl;
	}
	void area()
	{
		float ar;
		ar = (2 * 3.14 * r * h) + 2 * (3.14 * r * r);
		cout<<"Area of Cylinder is : "<<ar<<" m^2"<<endl;
	}
};
class Cone:public Cylinder
{
	float l;
	public:
	void input()
	{
		Cylinder::input();
		cout<<"Enter the Slant Height (in metres) : ";
		cin>>l;
	}
	void show()
	{
		Cylinder::show();
		cout<<"Slant Height is : "<<l<<" m"<<endl;
	}
	void area()
	{
		float ar = (3.14 * r * r) + (3.14 * r * l);
		cout<<"Area of Cone is : "<<ar<<" m^2"<<endl;
	}
	
};
int main()
{
	int ch;
	do{
		cout<<"--------------------------------"<<endl;
		cout<<"Press 1 : to process a Circle"<<endl;
		cout<<"Press 2 : to process a Cylinder"<<endl;
		cout<<"Press 3 : to process a Cone"<<endl;
		cout<<"Press 4 : to Exit"<<endl;
		cout<<"--------------------------------"<<endl;
		cout<<"Your Choice : ";
		cin>>ch;
		if(ch==1)
		{
			Circle c;
			c.input();
			cout<<"--------------------------------"<<endl;
			c.show();
			cout<<"--------------------------------"<<endl;
			c.area();
			cout<<"--------------------------------"<<endl<<endl<<endl;
		}
		else if(ch==2)
		{
			Cylinder c;
			c.input();
			cout<<"--------------------------------"<<endl;
			c.show();
			cout<<"--------------------------------"<<endl;
			c.area();
			cout<<"--------------------------------"<<endl<<endl<<endl;
		}
		else if(ch==3)
		{
			Cone c;
			c.input();
			cout<<"--------------------------------"<<endl;
			c.show();
			cout<<"--------------------------------"<<endl;
			c.area();
			cout<<"--------------------------------"<<endl<<endl<<endl;
		}
	}while(ch!=4);
	return 0;
}
