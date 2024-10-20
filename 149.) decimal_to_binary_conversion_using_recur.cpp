//decimal to binary using recursion
#include<iostream>
using namespace std;
void dec_to_b(int n){
    if(n==0)
        return;
    dec_to_b(n/2);
    cout<<n%2;
}

int main(){
    int n;
    cout<<"Enter a Decimal Number : ";
    cin>>n;
    dec_to_b(n);
    cout<<endl;
    return 0;
}