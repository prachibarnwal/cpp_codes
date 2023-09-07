// open the file story.txt and all its content in capital letters.
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ifstream file("story.txt");
	char a[100];
	cout<<"File's Content in Capital Letters : "<<endl;
	while(file.getline(a,100))
	{
		for(int i=0;a[i] != '\0';i++)
		{
			if(a[i]>=97 && a[i] <= 122)
			a[i] -=32;
			cout<<a[i];	
		}
		cout<<endl;
	}
	return 0;
}
