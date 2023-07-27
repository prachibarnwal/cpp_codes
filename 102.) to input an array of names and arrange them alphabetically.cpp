//to input an array of names and arrange them alphabetically
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[10][50],temp[50]=" ";
	int n,i,j;
	cout<<"Enter Number of Students : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter Name : ";
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (strcmp(a[i], a[j]) > 0)
			{
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
		}
	}
	
	cout<<"Student Names Are : "<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<"  ";
	return 0;
}
