#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	fstream f1;
	f1.open("table.txt",ios::app);
	int n,i;
	cout<<"Enter a Number : ";
	cin>>n;
	
	f1<<"Table of : "<<n<<endl;
	for(i = 1;i<=10;i++)
	f1<<n<<" X "<<i<<" = "<<n*i<<endl;
	f1.close();
	return 0;
}
