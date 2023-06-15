//WAP to input a three digit number & print it in words.
#include<iostream>
using namespace std;
int main()
{
	int num,rem1,rem2;
	cout<<"Enter a Three Digit Number : ";
	cin>>num;
	rem1 = num % 10;
	num /= 10;
	rem2 = num % 10;
	num /= 10;
	switch(num)
	{
		case 1:
			cout<<"One Hundred ";
			break;
		case 2:
			cout<<"Two Hundred ";
			break;
		case 3:
			cout<<"Three Hundred ";
			break;
		case 4:
			cout<<"Four Hundred ";
			break;
		case 5:
			cout<<"Five Hundred ";
			break;
		case 6:
			cout<<"Six Hundred ";
			break;
		case 7:
			cout<<"Seven Hundred ";
			break;
		case 8:
			cout<<"Eight Hundred ";
			break;
		case 9:
			cout<<"Nine Hundred ";
			break;
	}
	switch(rem2)
		{
			case 2:
				cout<<"Twenty ";
				switch(rem1)
				{
					case 1:
						cout<<"One";
						break;
					case 2:
						cout<<"Two ";
						break;
					case 3:
						cout<<"Three ";
						break;
					case 4:
						cout<<"Four ";
						break;
					case 5:
						cout<<"Five ";
						break;
					case 6:
						cout<<"Six ";
						break;
					case 7:
						cout<<"Seven ";
						break;
					case 8:
						cout<<"Eight ";
						break;
					case 9:
						cout<<"Nine ";
						break;
				}
				break;
			case 3:
				cout<<"Thirty ";
				switch(rem1)
				{
					case 1:
						cout<<"One";
						break;
					case 2:
						cout<<"Two ";
						break;
					case 3:
						cout<<"Three ";
						break;
					case 4:
						cout<<"Four ";
						break;
					case 5:
						cout<<"Five ";
						break;
					case 6:
						cout<<"Six ";
						break;
					case 7:
						cout<<"Seven ";
						break;
					case 8:
						cout<<"Eight ";
						break;
					case 9:
						cout<<"Nine ";
						break;
				}
				break;
			case 4:
				cout<<"Forty ";
				switch(rem1)
				{
					case 1:
						cout<<"One";
						break;
					case 2:
						cout<<"Two ";
						break;
					case 3:
						cout<<"Three ";
						break;
					case 4:
						cout<<"Four ";
						break;
					case 5:
						cout<<"Five ";
						break;
					case 6:
						cout<<"Six ";
						break;
					case 7:
						cout<<"Seven ";
						break;
					case 8:
						cout<<"Eight ";
						break;
					case 9:
						cout<<"Nine ";
						break;
				}
				break;
			case 5:
				cout<<"Fifty ";
				switch(rem1)
				{
					case 1:
						cout<<"One";
						break;
					case 2:
						cout<<"Two ";
						break;
					case 3:
						cout<<"Three ";
						break;
					case 4:
						cout<<"Four ";
						break;
					case 5:
						cout<<"Five ";
						break;
					case 6:
						cout<<"Six ";
						break;
					case 7:
						cout<<"Seven ";
						break;
					case 8:
						cout<<"Eight ";
						break;
					case 9:
						cout<<"Nine ";
						break;
				}
				break;
			case 6:
				cout<<"Sixty ";
				switch(rem1)
				{
					case 1:
						cout<<"One";
						break;
					case 2:
						cout<<"Two ";
						break;
					case 3:
						cout<<"Three ";
						break;
					case 4:
						cout<<"Four ";
						break;
					case 5:
						cout<<"Five ";
						break;
					case 6:
						cout<<"Six ";
						break;
					case 7:
						cout<<"Seven ";
						break;
					case 8:
						cout<<"Eight ";
						break;
					case 9:
						cout<<"Nine ";
						break;
				}
				break;
			case 7:
				cout<<"Seventy ";
				switch(rem1)
				{
					case 1:
						cout<<"One";
						break;
					case 2:
						cout<<"Two ";
						break;
					case 3:
						cout<<"Three ";
						break;
					case 4:
						cout<<"Four ";
						break;
					case 5:
						cout<<"Five ";
						break;
					case 6:
						cout<<"Six ";
						break;
					case 7:
						cout<<"Seven ";
						break;
					case 8:
						cout<<"Eight ";
						break;
					case 9:
						cout<<"Nine ";
						break;	
				}
				break;
			case 8:
				cout<<"Eighty ";
				switch(rem1)
				{
					case 1:
						cout<<"One";
						break;
					case 2:
						cout<<"Two ";
						break;
					case 3:
						cout<<"Three ";
						break;
					case 4:
						cout<<"Four ";
						break;
					case 5:
						cout<<"Five ";
						break;
					case 6:
						cout<<"Six ";
						break;
					case 7:
						cout<<"Seven ";
						break;
					case 8:
						cout<<"Eight ";
						break;
					case 9:
						cout<<"Nine ";
						break;
				}
				break;
			case 9:
				cout<<"Ninty ";
				switch(rem1)
				{
					case 1:
						cout<<"One";
						break;
					case 2:
						cout<<"Two ";
						break;
					case 3:
						cout<<"Three ";
						break;
					case 4:
						cout<<"Four ";
						break;
					case 5:
						cout<<"Five ";
						break;
					case 6:
						cout<<"Six ";
						break;
					case 7:
						cout<<"Seven ";
						break;
					case 8:
						cout<<"Eight ";
						break;
					case 9:
						cout<<"Nine ";
						break;
				}
				break;
			case 1:
				switch(rem1)
					{
						case 1:
							cout<<"Eleven ";
							break;
						case 2:
							cout<<"Twelve ";
							break;
						case 3:
							cout<<"Thirteen ";
							break;
						case 4:
							cout<<"Fourteen ";
							break;
						case 5:
							cout<<"Fifteen ";
							break;
						case 6:
							cout<<"Sixteen ";
							break;
						case 7:
							cout<<"Seventeen ";
							break;
						case 8:
							cout<<"Eighteen ";
							break;
						case 9:
							cout<<"Nineteen ";
							break;
					}
				break;
		}
	return 0;	
}
