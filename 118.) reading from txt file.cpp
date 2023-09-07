//to read and print data of file "table.txt"
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	char txt[80];
	ifstream f1("table.txt");
	// fstream f1;
	//f1.open("table.txt",ios::in);
	while(f1.getline(txt,80))
	{
		cout<<txt<<endl;
	}
	f1.close();
	return 0;
}
