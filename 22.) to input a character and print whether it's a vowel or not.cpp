// WAP to input a character and print whether it's a vowel or not
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a Single Character : ";
	cin>>ch;
	switch(ch)
	{
		case 'a':
		case 'A':
			cout<<"It's A Vowel !"<<endl;
			break;
		case 'e':
		case 'E':
			cout<<"It's A Vowel !"<<endl;
			break;
		case 'i':
		case 'I':
			cout<<"It's A Vowel !"<<endl;
			break;
		case 'o':
		case 'O':
			cout<<"It's A Vowel !"<<endl;
			break;
		case 'u':
		case 'U':
			cout<<"It's A Vowel !"<<endl;
			break;
		default:
			cout<<"It's Not a Vowel"<<endl;
	}
	return 0;

}
