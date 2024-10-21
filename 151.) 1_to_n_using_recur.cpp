// print 1 to N using recursion
//time complexity : Theta(n)
//auxiliary space : O(n)
#include<iostream>
using namespace std;

void print1ton(int n){
    if(n==0)
        return;
    print1ton(n-1);
    cout<<n<<" ";
    
}
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    print1ton(n);
    return 0;
}