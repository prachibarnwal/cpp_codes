//WAP to input 10 alphabets and count how many of them are vowel
#include<iostream>
using namespace std;
int main()
{
	char a,b,c,d,e,f,g,h,i,j;
	int cnt = 0;
	cout<<"Enter any 10 Alphabets : ";
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
	if (a == 'a' || a == 'A' || a == 'e' || a == 'E' or a == 'i' or a == 'I' || a == 'o' || a =='O' || a == 'u' || a == 'U')
	{
		cnt += 1;
	}
	if (b == 'a' || b == 'A' || b == 'e' || b == 'E' or b == 'i' or b == 'I' || b == 'o' || b =='O' || b == 'u' || b == 'U')
	{
		cnt += 1;
	}
	if (c == 'a' || c == 'A' || c == 'e' || c == 'E' or c == 'i' or c == 'I' || c == 'o' || c =='O' || c == 'u' || c == 'U')
	{
		cnt += 1;
	}
	if (d == 'a' || d == 'A' || d == 'e' || d == 'E' or d == 'i' or d == 'I' || d == 'o' || d =='O' || d == 'u' || d == 'U')
	{
		cnt += 1;
	}
	if (e == 'a' || e == 'A' || e == 'e' || e == 'E' or e == 'i' or e == 'I' || e == 'o' || e =='O' || e == 'u' || e == 'U')
	{
		cnt += 1;
	}
	if (f == 'a' || f == 'A' || f == 'e' || f == 'E' or f == 'i' or f == 'I' || f == 'o' || f =='O' || f == 'u' || f == 'U')
	{
		cnt += 1;
	}
	if (g == 'a' || g == 'A' || g == 'e' || g == 'E' or g == 'i' or g == 'I' || g == 'o' || g =='O' || g == 'u' || g == 'U')
	{
		cnt += 1;
	}
	if (h == 'a' || h == 'A' || h == 'e' || h == 'E' or h == 'i' or h == 'I' || h == 'o' || h =='O' || h == 'u' || h == 'U')
	{
		cnt += 1;
	}
	if (i == 'a' || i == 'A' || i == 'e' || i == 'E' or i == 'i' or i == 'I' || i == 'o' || i =='O' || i == 'u' || i == 'U')
	{
		cnt += 1;
	}
	if (j == 'a' || j == 'A' || j == 'e' || j == 'E' or j == 'i' or j == 'I' || j == 'o' || j =='O' || j == 'u' || j == 'U')
	{
		cnt += 1;
	}
	cout<<"Total Number of Vowels : "<<cnt<<endl;
	return 0;
}
