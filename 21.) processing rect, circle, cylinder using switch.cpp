#include<iostream>
using namespace std;
int main()
{
	int t;
	cout<<"Press 1 - to Process a Rectangle"<<endl;
	cout<<"Press 2 - to Process a Circle"<<endl;
	cout<<"Press 3 - to Process a Cylinder"<<endl;
	cout<<"Enter Your Choice : ";
	cin>>t;
	switch(t)
	{
		case 1:
			float l,b,ar,per;
			char ch;
			cout<<"Enter Length & Breadth : ";
			cin>>l>>b;
			cout<<"Press 'A' for Area"<<endl;
			cout<<"Press 'P' for Perimeter"<<endl;
			cout<<"Enter Your Choice : ";
			cin>>ch;
			switch(ch)
			{
				case 'a':
				case 'A':
				ar = l * b;
				cout<<"Area of Rectangle is : "<<ar<<endl;
				break;
				case 'p':
				case 'P':
				per = 2 * (l + b);
				cout<<"Perimeter of Rectangle is : "<<per<<endl;		
			}
			break;
		case 2:
			float rad, are, peri;
			char cho;
			cout<<"Enter Radius : ";
			cin>>rad;
			cout<<"Press 'A' for Area"<<endl;
			cout<<"Press 'P' for Perimeter"<<endl;
			cout<<"Enter Your Choice : ";
			cin>>cho;
			switch(cho)
			{
				case 'a':
				case 'A':
				are = 3.14 * rad * rad;
				cout<<"Area of Circle is : "<<are<<endl;
				break;
				case 'p':
				case 'P':
				peri = 2 * 3.14 * rad;
				cout<<"Perimeter of Circle is : "<<peri<<endl;		
			}
			break;
		case 3:
			float r,h,area,vol;
			char choi;
			cout<<"Enter Radius : ";
			cin>>r;
			cout<<"Enter Height : ";
			cin>>h;
			cout<<"Press 'T' for Total Surface Area"<<endl;
			cout<<"Press 'V' for Volume"<<endl;
			cout<<"Enter Your Choice : ";
			cin>>choi;
			switch(choi)
			{
				case 't':
				case 'T':
				area = (2 * 3.14 * r * h) + (2 * 3.14 * r * r);
				cout<<"Total Surface Area of Circle is : "<<area<<endl;
				break;
				case 'v':
				case 'V':
				vol = 3.14 * r * r * h;
				cout<<"Volume of Circle is : "<<vol<<endl;		
			}
			break;
		default:
		cout<<"Invalid Choice !!"<<endl;
			
	}
	return 0;
}
