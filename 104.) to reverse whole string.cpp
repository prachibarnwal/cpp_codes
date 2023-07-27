//code to input a string from user and reverse the string
#include<iostream>
using namespace std;
int main()
{
	char s[60];
	int i,n;
	cout<<"Enter a String : ";
	cin.getline(s,60);
	for(n=0;s[n]!='\0';n++);
	
	cout<<"String is Reverse Order is : ";
	for(i=n-1;i>=0;i--)
	cout<<s[i];
	return 0;
}
