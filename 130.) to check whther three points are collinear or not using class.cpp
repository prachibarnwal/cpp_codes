#include<iostream>
using namespace std;
class Point
{
	int x,y;
	public:
		void input()
		{
			cout<<"Enter x and Y : ";
			cin>>x>>y;
		}
		void show()
		{
			cout<<"Point is : ("<<x<<","<<y<<")"<<endl;
		}
		void isCollinear(Point a, Point b)
		{
			if(x == a.x && a.x == b.x || y == a.y && a.y ==b.y)
				cout<<"Points Are Collinear"<<endl;
			else
				cout<<"Points are Non-Collinear"<<endl;
		}
};
int main()
{
	Point p1,p2,p3;
	p1.input();
	p2.input();
	p3.input();
	p1.isCollinear(p2,p3);
	return 0;
}
