//decimal to hexadecimal converter
#include<iostream>
using namespace std;
int main()
{
	int num,nu,i,k=0,rem;
	char arr[30];
	cout<<"Enter a Number : ";
	cin>>num;
	nu=num;
	while (num >0)
	{
		rem = num % 16;
		switch(rem)
		{
			case 10:
				rem = 'A';
				break;
			case 11:
				rem = 'B';
				break;
			case 12:
				rem = 'C';
				break;
			case 13:
				rem = 'D';
				break;
			case 14:
				rem = 'E';
				break;
			case 15:
				rem = 'F';
				break;
			case 1:
				rem = '1';
				break;
			case 2:
				rem = '2';
				break;
			case 3:
				rem = '3';
				break;
			case 4:
				rem = '4';
				break;
			case 5:
				rem = '5';
				break;
			case 6:
				rem = '6';
				break;
			case 7:
				rem = '7';
				break;
			case 8:
				rem = '8';
				break;
			case 9:
				rem = '9';
				break;
			case 0:
				rem = '0';
				break;
		}
		arr[k++] = rem;
		num /= 16;
	}
	cout<<"Hexa-Decimal Equivalent of "<<nu<<" is ";
	for (i = k-1;i>=0;i--)
	{
		cout<<arr[i];
	}
	cout<<endl<<endl;
	return 0;
}


