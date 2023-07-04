//to insert an element in an array of size 10.
#include<iostream>
using namespace std;
int main()
{
	int a[10] = {8,12,70,22,42,21};
	int i,num,pos,n=6;
	char ans;
	do
	{
		if (n==10)
		{
			cout<<"Array is Full, Insertion not Possible "<<endl;
			break;
		}
		cout<<"Enter Number to be inserted : ";
		cin>>num;
		cout<<"Enter the Position : ";
		cin>>pos;
		if (pos > n)
		{
			cout<<"Insertion Not Possible as the array has only "<<n<<" elements";
			break;
		}
		for (i=n;i>pos;i--)
		{
			a[i] = a[i-1];
		}
		a[pos] = num;
		n++;
		cout<<"Array After Insertion is : ";
		for (i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl<<"Do you want to Insert Again (y/n) : ";
		cin>>ans;
	}
	while (ans == 'y' || ans == 'Y');
	return 0;
}
