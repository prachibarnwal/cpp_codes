#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream abc;
	abc.open("MYFILE.txt");
	abc<<"HEY ALL"<<endl;
	abc<<"THIS IS PRACHI BARNWAL"<<endl;
	abc.close();
	return 0;
}
