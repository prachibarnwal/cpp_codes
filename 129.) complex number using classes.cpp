#include<iostream>
using namespace std;
class Complex
{
	int real,img;
	public:
		void input()
		{
			cout<<"Enter Real and Imagianry Part : ";
			cin>>real>>img;
		}
		void show()
		{
			cout<<"Complex Number is : "<<real<<" + i"<<img<<endl;
		}
		bool equals(Complex t)
		{
			if(real==t.real && img==t.img)
				return true;
			else
				return false;
		}
		Complex add(Complex a)
		{
			Complex s;
			s.real = real+a.real;
			s.img = img+a.img;
			return s;
		}
};
int main()
{
	Complex a,b,c;
	a.input();
	b.input();
	a.show();
	b.show();
	if(a.equals(b))
	{
		cout<<"Complex Numbers are Equal"<<endl;
	}
	else
		cout<<"Complex Numbers are Not Equal"<<endl;
	c = a.add(b);
	c.show();
	return 0;
}
