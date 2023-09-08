// open the file story.txt and count the number of vowels in the file and No. of digit in the file.
#include<fstream>
#include<iostream>
using namespace std;

int dig(char a)
{
	//cout<<a<<endl;
	if(a<=57 && a>=48)
		return 1;
	else
		return 0;	
}

int main()
{
	ifstream file("story.txt");
	char var[100];
	int cnt = 0,cntd = 0,b;
	cout<<"Content of File 'story.txt' : "<<endl;
	while(file.getline(var,100))
	{
		for(int i = 0; var[i] != '\0';i++)
		{
			cout<<var[i];
			b = dig(var[i]);
			if(var[i]>=65 && var[i] <= 90)
				var[i] += 32;
			if(var[i] == 'a' || var[i] == 'e' || var[i] == 'i' || var[i] == 'o' || var[i] == 'u')
				cnt++;
			else if(b==1)
				cntd++;
		}
		cout<<endl;
	}
	cout<<endl<<endl<<"Number of Digits are : "<<cntd<<endl;
	cout<<"Number of Vowels are : "<<cnt<<endl;
	return 0;
}

