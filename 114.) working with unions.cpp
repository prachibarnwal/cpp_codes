// union is ued when we know that we have to store only one variable and not all declared in the union
// structure is used to group the elememts where all the elements have to be stored

#include<iostream>
using namespace std;
union Incentive
{
	int overtime;
	double comm;
	int equity;
};
int main()
{
	Incentive a;
	cout<<sizeof(a)<<endl;
	cout<<"Enter Overtime : ";
	cin>>a.overtime;
	cout<<"Overtime Earned is : "<<a.overtime<<endl;
	return 0;
}
