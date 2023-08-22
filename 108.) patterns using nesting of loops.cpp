#include <iostream>
using namespace std;
int main()
{
	int n,i,j,k,num=1;
	cout<<"enter the number of lines : ";
	cin>>n;
	k=n;
	k+= k-2;
	for(j=1;j<=n;j++)
	{
		for(int x=1;x<=1;x++)
		{
			for(i=0;i<k;i++)
			{
				cout<<"  ";
			}
		
			cout<<num++;
			for(int nn=0;nn<3;nn++)
				cout<<"  ";
			for(int nm=1;nm <j;nm++)
			{
				cout<<num++;
				for(int nn=0;nn<3;nn++)
				cout<<"  ";
			}
			for(i=0;i<k;i++)
			{
				cout<<"  ";
			}
			k -= 2;
			cout<<endl;
		}
	}
    return 0;
}
