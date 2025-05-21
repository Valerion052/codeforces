#include <iostream>

using namespace std;

int gcd(int k, int c) {
    if (c==0) {return k;}
    else {return gcd(c, k%c);}
}

int euler(int k) {
    int ans = k;
    for (long long i=2; i*i<=k; ++i) {
        if (k%i==0) {
            while (k%i==0) {k/=i;}
            ans -= ans/i;

        }
    }
    if (k>1) {ans-=ans/k;}
    return ans;
}

int st(int k, int c, int mod) {
    int ans = 1;
    k %= mod;
    if (c==0) {return 1%mod;}

    while (c>0) {
        if (c%2==1) {ans = ((long long)ans * k%mod)%mod;}
        k = (k*(long long)k)%mod;
        c/=2;
    }
    return ans;
}

int invElem(int n, int m) {
    int e = euler(m);
    int a = st(n, e-1, m);
    return a;
}


int main() {
    long long n, m;
    cin >> n >> m;

    if (gcd(n, m)==1) {cout << invElem(n, m);} 
    else {cout << -1;}

    


}