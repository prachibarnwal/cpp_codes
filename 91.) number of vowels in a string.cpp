//to count no. of vowels in a string
#include<iostream>
using namespace std;
int main()
{
	char name[20];
	int i,n=0;
	cout<<"Enter a Name : ";
	cin>>name;
	for(i=0;name[i] != '\0';i++)
	{
		if(name[i] == 'a' || name[i] == 'e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
			n++;
	}
	cout<<"Number of vowels in "<<name<<" is "<<n;
	return 0;
}
