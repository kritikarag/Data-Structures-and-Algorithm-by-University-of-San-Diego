#include<iostream>
using namespace std;

long long gcd(long long a, long long b){
    if(b==0)
    return a;
    if (a==0)
    return b;
    if(a==b)
    return a;
    else if(b>a)
    return gcd(a, b%a);
    else
    return gcd(a%b,b);
}

int main(){
    long long a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}