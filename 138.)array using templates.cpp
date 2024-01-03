#include<iostream>
using namespace std;
template <class T>
class Array
{
	T arr[5];
	public:
		void input()
		{
			cout<<"Enter Array Elements : ";
			for(int i = 0;i<5; i++)
				cin>>arr[i];
		}
		void show()
		{
			cout<<"Array Elements are : ";
			for(int i = 0;i<5;i++)
				cout<<arr[i]<<"\t";
		}
};
int main()
{
	Array <int> myarr;
	myarr.input();
	myarr.show();
	return 0;
}
