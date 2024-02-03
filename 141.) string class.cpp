/*
define a class string which should have a character
array as data member, define functions to overload :

cin operator '>>'
cout operator '<<'
+ operator to concatenate two strings
* operator to replicate a string
== to compare if two strings are same 
[] to return the character present at given position
reverse() function to get reverse of a string
ispalin() will check whether a string is palindrome or not
upper() ~ CODING IS LOB
lower() ~ coding is lob
title() ~ Coding Is Lob
toggle() ~ 'CODING is LOB' - coding IS lob
sentence() ~ Coding is lob
setCharAt(pos, character)
charAt(pos)
subString(Strt_pos, end_pos)
indexOf(strng) 
*/

#include<iostream>
using namespace std;
int i;

class String
{
	char a[100];
	public:
		friend istream& operator >>(istream &x, String &y);
		friend ostream& operator <<(ostream &x, String &y);
		String operator +(String b);
		String operator *(int x);
		bool operator ==(String b);
		String reverse();
		bool ispalin();
		String isupper();
		String islower();
		String istitle();
		String istoggle();
		String issentence();
		int len();
		char operator [](int a);
		char charAt(int a);
		void setCharAt(int pos, char c);
		int indexOf(String);
		String subString(int spos, int epos);
};

int main()
{
	String a, b,c,d;
	bool z;
	int l;
	cin>>a;
	cout<<a.charAt(5);
	/*
	b = a.subString(2,6);
	cout<<b;
	cin>>b;
	l = a.indexOf(b);
	if(l != -1)
	cout<<"Found at "<<l<<endl;
	else
	cout<<"Not Found"<<endl;
	a.setCharAt(2, 'o');
	cout<<a;
	cout<<a[3];
	b = a.reverse();
	b.show();
	c = a + b;
	c.show();
	d = c * 5;
	d.show();
	b.input();
	if(a==b)
		cout<<"Strings Are Same "<<endl;
	else
		cout<<"Strings Are Not Same"<<endl;
	z = a.ispalin();
	cout<<z<<endl;
	
	b = a.isupper();
	b.show();
	b = a.islower();
	b.show();
	b = a.istitle();
	b.show();
	b = a.istoggle();
	b.show();
	b = a.issentence();
	cout<<b;
	l = a.len();
	cout<<"Length of String is : "<<l<<endl;
	

	int ch;
	do
	{
		cout<<"Press 1 : Concatenate Two Strings"<<endl;
		cout<<"Press 2 : Replicate a String"<<endl;
		cout<<"Press 3 : Compare Two Strings"<<endl;
		cout<<"Press 4 : Reverse a String"<<endl;
		cout<<"Press 5 : Palindrome String"<<endl;
		cout<<"Press 6 : Convert a String in UpperCase"<<endl;
		cout<<"Press 7 : Convert a String in LowerCase"<<endl;
		cout<<"Press 8 : Convert a String in TitleCase"<<endl;
		cout<<"Press 9 : Convert a String in SentenceCase"<<endl;
		cout<<"Press 10 : Convert a String in ToggleCase"<<endl;
		cout<<"Press 11 : Exit"<<endl<<endl;
		cout<<"Enter Your Choice : ";
		cin>>ch;
		switch(ch)
		{
			case 4:
				b.input();
				c = b.reverse();
				c.show();
				break;
			case 3:
				b.input();
				c.input();
				if(b==c)
					cout<<"Strings Are Same"<<endl;
				else
					cout<<"Strings Are Not Same"<<endl;
				break;
			case 1:
				b.input();
				c.input();
				d = b+c;
				cout<<"Concatenated ";
				d.show();
				break;
			case 2:
				b.input();
				int n;
				cout<<"Enter How Many Time you want the String to Replicate : ";
				cin>>n;
				c = b * n;
				cout<<"Replicated ";
				c.show();	
				break;	
		}
	}while(ch != 11);
	*/
	
	return 0;
}
/*
bool String::ispalin()
{
	String b;
	b = reverse();
	if(b.a == a)
	{
		return true;
	}
	else
		return false;
}
*/
char String::operator [](int p)
{
	if(p >= 0 && p < len())
		return a[p];
	else
		return '\0';
}
char String::charAt(int x)
{
	if(x >= 0 && x < len())
		return a[x];
	else
		return '\0';
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
String String::issentence()
{
	String b;
	if(a[0] >= 'a' && a[0] <= 'z')
		b.a[0] = a[0] - 32;
	for(i=1; a[i] != '\0'; i++)
		b.a[i] = a[i];
	b.a[i++] = '\0';
	return b;
}
String String::istoggle()
{
	String b;
	for(i=0;a[i] != '\0';i++)
	{
		if(a[i]>='a' && a[i]<='z')
			b.a[i] = a[i]-32;
		else if(a[i]>='A' && a[i]<='Z')
			b.a[i] = a[i]+32;
		else
			b.a[i] = a[i];
	}
	b.a[i++] = '\0';
	return b;
}
String String::istitle()
{
	String b;
	if(a[0] >= 'a' && a[0] <= 'z')
		b.a[0] = a[0] - 32;
	for(i = 1; a[i] != '\0'; i++)
	{
		if(a[i] == ' ')
		{
			b.a[i] = ' ';
			if(a[i+1] >= 'a' && a[i+1 <= 'z'])
				b.a[i+1] = a[i+1] - 32;
			i++;
		}
		else
			b.a[i] = a[i];
	}
	b.a[i++] = '\0';
	return b;
}
String String::isupper()
{
	String b;
	for(i=0;a[i] != '\0';i++)
	{
		if(a[i] >= 'a' && a[i] <= 'z')
			b.a[i] = a[i] - 32;
		else
			b.a[i] = a[i];
	}
	b.a[i++] = '\0';
	return b;
}
String String::islower()
{
	String b;
	for(i=0; a[i] != '\0';i++)
	{
		if(a[i] >= 'A' && a[i] <= 'Z')
			b.a[i] = a[i] + 32;
		else
			b.a[i] = a[i];
	}
	b.a[i++] = '\0';
	return b;
}
istream& operator >>(istream &x, String &y)
{
	cout<<"Enter the String : ";
	cin.getline(y.a,100);
	return x;
}
ostream& operator <<(ostream &x, String &y)
{
	cout<<"String is : "<<y.a<<endl;
	return x;
}
int String::len()
{
	int x;
	for(x = 0; a[x] != '\0'; x++);
	return x;
}
void String::setCharAt(int pos, char c)
{
	int n;
	n = len();
	if(pos >= 0 && pos < n)
		a[pos] = c;
}
int String::indexOf(String c)
{
	int x,y, cnt;
	x = len();
	y = c.len();
	for(i=0; i<=x-y; i++)
	{
		cnt = 0;
		for(int j = 0; j<y;j++)
		{
			if(a[i+j] == c.a[j])
				cnt++;
			else
				break;
		}
		if(cnt == y)
			return i;
	}
	return -1;
}
String String::subString(int spos, int epos)
{
	String b;
	int j;
	if((spos>=0 && spos <= len()) && (epos>spos && epos <=len()))
	{
		for(i = spos; i<epos; i++)
			b.a[j++] = a[i];
	}
	b.a[j++] = '\0';
	return b;
}
