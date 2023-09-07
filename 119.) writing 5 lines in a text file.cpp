// to read any 5 statements from user and save those in a file named story.txt
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	char a[100];
	int i;
	ofstream f1;
	f1.open("story.txt");
	for(i=1;i<=5;i++)
	{
		cout<<"Statement "<<i<<" : ";
		cin.getline(a,100);
		f1<<a<<endl;
	}
	f1.close();
	return 0;
}
