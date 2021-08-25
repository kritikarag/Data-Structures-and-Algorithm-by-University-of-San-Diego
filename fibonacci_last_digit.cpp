#include <iostream>
using namespace std;
int get_fibonacci_last_digit_naive(int n) {
     int  f[n+2],i;

    f[0]=0;
    f[1]=1;
    for(i=2;i<=n;i++){
        f[i]= (f[i-1]+f[i-2])%10;
    }

    return f[n];
}

int main() {
    int n;
    cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    cout << c << '\n';
    }
