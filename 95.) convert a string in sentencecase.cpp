//to convert a string in sentencecase
// ex : "I love coding"
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
		
	cout<<"string in sentence case : "<<name;
	return 0;
}
