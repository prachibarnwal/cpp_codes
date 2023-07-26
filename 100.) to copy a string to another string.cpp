// code to copy a string to another string
#include<iostream>
using namespace std;
int main()
{
	char str1[50],str2[50];
	int i;
	cout<<"Enter String 1 : ";
	cin>>str1;
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i] = str1[i];
	}
	str2[i] = '\0';
	cout<<"Copied String is : "<<str2<<endl<<endl;
	return 0;
}
