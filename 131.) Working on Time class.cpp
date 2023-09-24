/*
Define a class Named Time having hours, minutes &
seconds as data members. Define functions to input(), 
show(), compare() ~ to print the greater time
and add() two time objects and normalize 
the new time value
*/
#include<iostream>
using namespace std;
class Time
{
	int h,m,s;
	public:
		void input()
		{
			cout<<"Enter Hours, Minutes, Seconds : ";
			cin>>h>>m>>s;
		}
		void show()
		{
			cout<<"Time is : "<<h<<" hours "<<m<<" minutes "<<s<<" seconds"<<endl; 
		}
		Time add(Time x)
		{
			Time t;
			int a,b;
			t.h = h + x.h;
			t.m = m + x.m;
			t.s = s + x.s;
			if(t.s >= 60)
			{
				a = t.s / 60;
				t.s %= 60;
				t.m += a;
			}
			if(t.m >= 60)
			{
				b = t.m / 60;
				t.m %= 60;
				t.h += b;
			}
			return t;
		}
		Time comp(Time t)
		{
			Time x;
			int a=0,b=0;
			a += h * 3600 + m * 60 + s;
			b += t.h * 3600 + t.m * 60 + t.s;
			if(a>b)
			{
				x.h = h;
				x.m=m;
				x.s=s;
			}
			else if(b > a)
			{
				x.h = t.h;
				x.m = t.m;
				x.s=t.s;
			}
			return x;
		}
};
int main()
{
	Time a,b,c,d;
	a.input();
	b.input();
	a.show();
	b.show();
	c = a.comp(b);
	cout<<"\nAfter Comparing the Maximum ";
	c.show();     
	d = a.add(b);
	cout<<"\nSum of Entered ";
	d.show();
	return 0;
}
