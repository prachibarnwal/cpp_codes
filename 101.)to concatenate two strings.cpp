// code to concatenate two strings 
#include<iostream>
using namespace std;
int main()
{
	char str1[50],str2[50],str3[100];
	int i,n,m;
	cout<<"Enter String 1 : ";
	cin>>str1;
	cout<<"Enter String 2 : ";
	cin>>str2;
	
	for(n=0;str1[n]!='\0';n++);
	for(m=0;str2[m]!='\0';m++);
	
	for(i=0;i<n;i++)
	{
		str3[i] = str1[i];
	}
	
	for(i=0;i<m;i++)
	{
		str3[i+n] = str2[i];
	}
	
	str3[n+m] = '\0';
	cout<<str1<<" & "<<str2<<" after Concatenation : "<<str3<<endl<<endl;
	return 0;
}
