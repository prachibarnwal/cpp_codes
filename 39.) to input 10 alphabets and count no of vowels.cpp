//WAP to input 10 alphabets and count how many of them are vowel
#include<iostream>
using namespace std;
int main()
{
	char a;
	int cnt = 0;
	for(int i =0;i<10;i++)
	{
		cout<<"Enter Alphabet "<<i+1<<" : ";
		cin>>a;
		if (a == 'a' || a == 'A' || a == 'e' || a == 'E' or a == 'i' or a == 'I' || a == 'o' || a =='O' || a == 'u' || a == 'U')
		{
			cnt += 1;
		}
	}
	cout<<"Total Number of Vowels : "<<cnt<<endl;
	return 0;
}
