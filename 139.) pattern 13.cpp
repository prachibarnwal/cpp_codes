/* pattern printing
A
BA
CBA
DCBA
EDCBA
*/
#include<iostream>
using namespace std;

int main()
{
	for(int i =0;i<5;i++)
	{
		for(int j =i;j>=0;j--)
		{
			cout<<(char)(65+j);
		}
		cout<<endl;
	}
	return 0;
}
