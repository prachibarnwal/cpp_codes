/*
to have an array of strings and create another 
another array of strings which should have only
languages which have 3 letters in it.
*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char ar[10][20] = {"C++","Python","Java","Oracle","PHP","SQL","JSP","ASP","JavaScript","HTML"};
	char arr[10][20];
	int i,a=0;
	cout<<"Array Elements Are : ";
	for(i=0;i<10;i++)
	cout<<ar[i]<<endl;
	
	for(i=0;i<10;i++)
	{
		if (strlen(ar[i])== 3)
			strcpy(arr[a++],ar[i]);
	}
	
	cout<<"Languages Having Three Characters in Them Are : "<<endl;
	for(i=0;i<a;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
