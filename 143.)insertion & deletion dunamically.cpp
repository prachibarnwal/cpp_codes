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
				cout<<p[i]<<"\t";
		}
		void insert(int n, int num, int pos)
		{
			int temp;
			for(int i = n;i>pos;i--)
			{
				p[i] = p[i-1];
			}
			p[pos] = num;
			
		}
		void Delte(int n, int num)
		{
			for(int i = 0;i<n;i++)
			{
				if(p[i] == num)
				{
					for(int j = i;j<n-1;j++)
						p[j] = p[j+1];
					cout<<"Element Deleted"<<endl;
					n--;
					break;
				}
			}
		}
	
};
int main()
{
	Array arr(40);
	int num, pos;
	cout<<"Enter the Size of the Array : ";
	cin>>n;
	arr.input(n);
	arr.show(n);
	cout<<endl;
	cout<<"Enter the Number to be Inserted : ";
	cin>>num;
	cout<<"Enter the Position : ";
	cin>>pos;
	arr.insert(n, num, pos);
	n++;
	arr.show(n);
	cout<<endl;
	cout<<"Enter the Number to be Deleted : ";
	cin>>num;
	arr.Delte(n, num);
	n--;
	arr.show(n);
	cout<<endl;
	return 0;
}
