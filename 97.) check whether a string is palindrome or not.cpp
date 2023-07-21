//to check whether a string is palindrome or not
#include<iostream>
using namespace std;
int main()
{
	char name[30];
	int i,j,n;
	cout<<"Enter a String : ";
	cin>>name;
	for(n=0;name[n] != '\0';n++);
	
	for(i=0, j=n-1; i<j ; i++, j--)
	{
		if(name[i]==name[j])
			continue;
		else
			break;
	}
	if (i>=j)
	cout<<name<<" is a Palindrome"<<endl;
	else
	cout<<name<<" is not a Palindrome"<<endl;
	
	return 0;
}
