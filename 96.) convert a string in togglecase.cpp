//to convert a string in togglecase
// ex : if the string is : "This Is PraChI BarNwaL"
//  the output should be : "tHIS iS pRAcHi bARnWAl"
#include<iostream>
using namespace std;
int main()
{
	char name[100];
	int i,n=0;
	cout<<"Enter a Name : ";
	cin>>name;
				
	for(i=0;name[i] != '\0';i++)
	{
		if(name[i]>='a' && name[i]<='z')
			name[i] -= 32;
		else if(name[i]>='A' && name[i]<='Z')
			name[i] += 32;
	
	}
	cout<<"string in title case : "<<name;
	return 0;
}
