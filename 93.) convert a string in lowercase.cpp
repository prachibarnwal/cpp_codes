//to convert a string in lowercase
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
		if(name[i]>='A' && name[i]<='Z')
			name[i] += 32;
	}
	cout<<"WELCOME "<<name;
	return 0;
}
