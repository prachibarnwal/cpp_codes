// print N to 1 using recursion
//time complexity : Theta(n)
//auxiliary space : O(n)
#include<iostream>
using namespace std;

void printnto1(int n){
    if(n==0)
        return;
    cout<<n<<" ";
    printnto1(n-1);
    
}
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    printnto1(n);
    return 0;
}