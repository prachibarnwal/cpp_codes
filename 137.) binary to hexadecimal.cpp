//binary to hexadecimal conversion
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long int num,numm;
	int dec, rem, i=0;
	cout<<"Enter the Digits of Binary Number : ";
	cin>>num;
	numm = num;
	dec = 0;
	// converting binary to decimal
	while(numm > 0)
	{
		rem = numm % 10;
		numm /= 10;
		dec += rem * pow(2,i);
		i++;
	}
	//cout<<num<<"\t"<<numm<<endl;
	cout<<"Decimal of "<<num<<" is "<<dec<<endl;
	//converting decimal to hexadecimal
	char arr[30], k = 0;
	int hex[20] = {'0','1','2','3','4','5','6','7','8','9','0','A','B','C','D','E'};
	while(dec > 0)
	{
		rem = dec % 16;
		switch(rem)
		{
			case 1:
				arr[k++] = '1';
				break;
			case 2:
				arr[k++] = '2';
				break;
			case 3:
				arr[k++] = '3';
				break;
			case 4:
				arr[k++] = '4';
				break;
			case 5:
				arr[k++] = '5';
				break;
			case 6:
				arr[k++] = '6';
				break;
			case 7:
				arr[k++] = '7';
				break;
			case 8:
				arr[k++] = '8';
				break;
			case 9:
				arr[k++] = '9';
				break;
			case 0:
				arr[k++] = '0';
				break;
			case 10:
				arr[k++] = 'A';
				break;
			case 11:
				arr[k++] = 'B';
				break;
			case 12:
				arr[k++] = 'C';
				break;
			case 13:
				arr[k++] = 'D';
				break;
			case 14:
				arr[k++] = 'E';
				break;
			case 15:
				arr[k++] = 'F';
				break;
		}
		dec /= 16;
	}
	cout<<"HexaDecimal of "<<num<<" is : ";
	for(int x = k-1; x >= 0; x--)
		cout<<arr[x];
	return 0;
}
