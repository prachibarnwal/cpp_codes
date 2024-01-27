/*
define a class string which should have a character
array as data member, define functions to overload :
+ operator to concatenate two strings
* operator to replicate a string
== to compare if two strings are same 
reverse() function to get reverse of a string
ispalin() will check whether a string is 
palindrome or not
upper()
lower()
title()
toggle()
*/
#include<iostream>
using namespace std;

class String
{
	char a[100];
	public:
		void input()
		{
			cout<<"Enter the String : ";
			cin.getline(a,100);
		}
		void show()
		{
			cout<<"String is : "<<a<<endl;
		}
		String operator +(String b);
		String operator *(int x);
		bool operator ==(String b);
		String reverse();
};

int main()
{
	String a,b,c;
	bool z;
	a.input();
	b = a.reverse();
	b.show();
	return 0;
}

String String::reverse()
{
	String b;
	int x,y=0;
	for(x=0;a[x]!='\0';x++);
	for(int i = x-1; i >= 0; i--)
		b.a[y++] = a[i];
	b.a[y] = '\0';
	return b;
}
String String::operator *(int x)
{
	String c;
	int k;
	for(int i = 0;i<x;i++)
	{
		for(int j = 0; a[j] != '\0'; j++)
		c.a[k++] = a[j];
	}
	c.a[k] = '\0';
	return c;
}
String String::operator +(String b)
{
	String f;
	int i,j;
	for(i = 0; a[i] != '\0'; i++)
		f.a[i] = a[i];
	f.a[i++] = ' ';
	for( j = 0; b.a[j] != '\0'; j++)
		f.a[i++] = b.a[j];
	f.a[i] = '\0';
	return f;
}
bool String::operator ==(String b)
{
	int x,y, cnt = 0;
	for(x = 0;a[x]!='\0';x++);
	for(y=0;b.a[y]!='\0';y++);
	if(x==y)
	{
		for(int i = 0; i<x;i++)
		{
			if(a[i] == b.a[i])
				cnt++;
		}
		if(cnt == x)
			return true;
		else
			return false;
	}
	else
		return false;	
}
