//to input a string and search a given string in it
#include<iostream>
using namespace std;
int main()
{
	char a[100],b[20];
	int n,m,i,j,cnt,p,ab;
	cout<<"Enter a String : ";
	cin.getline(a,100);
	cout<<"Enter the String to be Searched : ";
	cin.getline(b,20);
	for(n=0;a[n]!='\0';n++);
	for(m=0;b[m]!='\0';m++);
	//cout<<n<<"  "<<m<<endl;
	for(i=0;i<=n-m;i++)
	{
		cnt=0;
		ab=0;
		for(j=i;j<m+i;j++)
		{
			if (a[j] == b[ab++])
			cnt++;
		}
		if(cnt==m)
		{
			p=i;
			break;
		}
	}
	if(cnt==m)
	cout<<b<<" Found at Position : "<<p+1<<endl;
	else
	cout<<b<<" Not Found"<<endl;
	return 0;
}
