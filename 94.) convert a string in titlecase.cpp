//to convert a string in titlecase
// ex : "I Love Coding"
#include<iostream>
using namespace std;
int main()
{
	char name[100];
	int i,n=0;
	cout<<"Enter a Name : ";
	cin>>name;
	
	if(name[0]>='a' && name[0]<='z')
		name[0] -= 32;		
				
	for(i=0;name[i] != '\0';i++)
	{
		if (name[i] == '_')
		{
			if(name[i+1]>='a' && name[i+1]<='z')
				name[i+1] -= 32;
		}
	}
	cout<<"string in title case : "<<name;
	return 0;
}
