/*
to make a class named array and declare function
name in the class and to make functions outside 
the class using scope resolution operator "::"
*/
#include<iostream>
using namespace std;
class Array
{
	int *a;
	int n;
	public:
		void input();
		void show();
		int search(int);
		void sort(int);
		Array add(Array);
};
int main()
{
	Array p,q,r;
	p.input();
	q.input();
	p.show();
	q.show();
	r = p.add(q);
	r.show();
	//p.sort(1);
	//q.sort(-1);
	//p.show();
	//q.show();
	//cout<<"15 Found at "<<p.search(15)<<endl;
	return 0;
}
Array Array::add(Array t)
{
	Array res;
	if(n == t.n)
	{
		res.a = new int[n];
		res.n = n;
		for(int i=0;i<n;i++)
			res.a[i] = a[i] + t.a[i];
	}
	else
	{
		res.n = 0;
		cout<<"Size Not Equal"<<endl;
	}
	return res;
}
void Array::input()
{
	cout<<"Enter the Number of Elements : ";
	cin>>n;
	a = new int[n];
	cout<<"Enter the Elements : ";
	for(int i=0;i<n;i++)
		cin>>a[i];
}
void Array::show()
{
	cout<<"\nArray Elements are : ";
	for(int i = 0;i<n;i++)
		cout<<a[i]<<"\t";
	cout<<endl;
}
 
int Array::search(int num)
{
	for(int i =0;i<n;i++)
	{
		if(a[i] == num)
			return i;
	}
	return -1;
}
void Array::sort(int x)
{
	if(x==1)
	{
		int i,j,temp;
		for(i=0;i<n;i++)
		{
			for(j = i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	}
	else if(x==-1)
	{
		int i,j,temp;
		for(i=0;i<n;i++)
		{
			for(j = i+1;j<n;j++)
			{
				if(a[i]<a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	}
}
