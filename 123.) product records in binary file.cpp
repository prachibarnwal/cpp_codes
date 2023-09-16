/*
WORKING ON BINARY FILES
to make a binary file named "products.dat" and make functions to
input show and search details of a product using classes
*/
#include<iostream>
#include<fstream>
using namespace std;
class Product
{
	int pid;
	char name[40];
	int cost,qty;
	public:
		void input()
		{
			cout<<"Enter Product id : ";
			cin>>pid;
			cout<<"Enter Name of The Product : ";
			cin>>name;
			cout<<"Enter Cost of The Product : ";
			cin>>cost;
			cout<<"Enter Quantity : ";
			cin>>qty;			
		}
		void show()
		{
			cout<<"Product Id is : "<<pid<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Cost : "<<cost<<endl;
			cout<<"Quantity : "<<qty<<endl;
		}
		void display()
		{
			cout<<pid<<"\t"<<name<<"\t"<<cost<<"\t"<<qty<<endl;
		}
		int search(int a)
		{
			if(pid==a)
				return 1;
			else
				return 0;
		}
		void copy(Product &p)
		{
			pid = p.pid;
			for(int i =0;i<40;i++)
				name[i] = p.name[i];
			cost = p.cost;
			qty = p.qty;
		}
};
int main()
{
	Product p,f;
	fstream fp;
	int ch;
	while(1)
	{
		cout<<"Press 1 : Add a Product"<<endl;
		cout<<"Press 2 : Display Products"<<endl;
		cout<<"Press 3 : to Search a Product"<<endl;
		cout<<"Press 4 : Exit"<<endl;
		cout<<"Your Choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
				p.input();
				fp.open("products.dat",ios::app | ios::binary);
				fp.write((char*)&p,sizeof(p));
				cout<<"Data Stored Successfully"<<endl;
				fp.close();
				break;
			}
			case 2:
			{
				fp.open("products.dat",ios::in | ios ::binary);		
				cout<<"-------------------------------"<<endl;
				cout<<"PID\tNAME\tCOST\tQTY\n";
				while(fp.read((char*)&p,sizeof(p)))
				{
					cout<<"-------------------------------"<<endl;
					p.display();
				}
				cout<<"-------------------------------"<<endl;
				fp.close();
				break;
			}
			case 3:
			{
				int nid,a;
				cout<<"Enter Product's Id to be Searched : ";
				cin>>nid;
				fp.open("products.dat",ios::in | ios::binary);
				while(fp.read((char*)&p,sizeof(p)))
				{
					a = p.search(nid);
					if(a==1)
					{
						f.copy(p);
						break;
					}
				}
				if(a==1)
				{
					cout<<"-------------------------------"<<endl;
					cout<<"PID\tNAME\tCOST\tQTY\n";
					cout<<"-------------------------------"<<endl;
					f.display();
					cout<<"-------------------------------"<<endl;
				}				
				else
					cout<<"Product Not Found !!"<<endl;
				fp.close();
				break;
			}
			cout<<&p<<endl;
			case 4:
			exit(0);
		}	
	}
	return 0;
}
