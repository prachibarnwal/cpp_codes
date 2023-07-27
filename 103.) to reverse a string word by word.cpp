//code to input a string from user and reverse the string word by word
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[100],b[100];
	int i,j,n;
	cout<<"Enter a String : ";
	cin.getline(a,100);
	for(n=0;a[n]!='\0';n++);
	
	char arr[20][20], temp[20]=" ";
	int x=0,y,c=0;
	for(i=0;n>x;i++)
	{
		for(j=0;a[x]!=' ' && a[x]!='\0';j++)
		{
			temp[j] = a[x];
			x++;
		}
		temp[j]='\0';
		strcpy(arr[c],temp);
		c++;
		x++;
	}
	cout<<"String in Reverse Order : ";
	for(i=c-1;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
