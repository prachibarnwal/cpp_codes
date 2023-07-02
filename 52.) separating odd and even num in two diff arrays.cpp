/*
Write a program to input an array of integers 
and create two separate arrays out of it, 
one containing all even numbers and 
one containing all odd numbers
*/
#include <iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Enter the size of array : ";
    cin>>i;
    int num[i],n;
    cout<<"Enter the elements of array :";
    for(n=0;n<i;n++)
    {
        cin>>num[n];
    }
    int j,k,l;
    k = 0;
    l = 0;
    int ev[k];
    for (n=0;n<i;n++)
    {
        j = num[n];
        if(j % 2 == 0)
        {
            ev[l] = j;
            l++;
            k++;
        }
    }
    int od[k],c1 = 0,c2 = 0;
    for (n=0;n<i;n++)
    {
        j = num[n];
        if(j % 2 != 0)
        {
            od[c1] = j;
            c1++;
            c2++;
        }
    }
    cout<<"ODD ELEMENTS ARE : ";
    for(c1=0;c1<c2;c1++)
    {
        cout<<od[c1]<<" ";
    }
    cout<<endl;
    cout<<"EVEN ELEMENTS ARE : ";
    for(l=0;l<k;l++)
    {
        cout<<ev[l]<<" ";
    }
}
