#include <iostream>

using namespace std;

long long st(long long x, long long y, long long m){
    long long ans = 1;
    x = x%m;
    if (y==0) {return 1%m;}

    while (y>0) {
        if (y%2==1) {ans = ans * x%m;}
        x = (x*x)%m;
        y/=2;
    }
    return ans;
}

int main() {
    long long x, y, m;
    cin >>  x >> y >> m;
    cout << st(x, y, m);
}