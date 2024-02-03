#include<iostream>
using namespace std;

int n;

class Array
{
	int *p;
	public:
		Array(int n)
		{
			p = new int[n];
		}
		~Array()
		{
			delete[] p;
		}
		void input(int n)
		{
			cout<<"Enter Array ELements : ";
			for(int i = 0;i<n;i++)
				cin>>p[i];
		}
		void show(int n)
		{
			cout<<"Array ELements are : ";
			for(int i=0;i<n;i++)
				cout<<p[i]<<"  ";
		}
		int insert(int num, int pos)
		{
			for(int i = n;i>pos;i--)
			{
				p[i] = p[i-1];
			}
			p[pos] = num;
			n++;
			return n;
		}
		int Delte(int num)
		{
			for(int i = 0;i<n;i++)
			{
				if(p[i] == num)
				{
					for(int j = i;j<n-1;j++)
						p[j] = p[j+1];
					cout<<"Element Deleted"<<endl;
				}
			}
			n = n-1;
			return n;
		}
};
int main()
{
	Array arr(40);
	int num, pos, ch;
	do
	{
	cout<<"Press 1 : Create an Array"<<endl;
	cout<<"Press 2 : Insert an Element"<<endl;
	cout<<"Press 3 : Delete an ELement"<<endl;
	cout<<"Press 4 : Show the Array"<<endl;
	cout<<"Press 5 : Exit"<<endl;
	cout<<"Enter Your Choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"Enter the Size of the Array : ";
			cin>>n;
			arr.input(n);
			break;
		case 4:
			arr.show(n);
			cout<<endl;
			break;
		case 2:	
			cout<<"Enter the Number to be Inserted : ";
			cin>>num;
			cout<<"Enter the Position (starting from index 0) : ";
			cin>>pos;
			arr.insert(num, pos);
			break;
		case 3:
			cout<<"Enter the Number to be Deleted : ";
			cin>>num;
			arr.Delte(num);
			break;
	}
	}while(ch != 5);
	return 0;
}
