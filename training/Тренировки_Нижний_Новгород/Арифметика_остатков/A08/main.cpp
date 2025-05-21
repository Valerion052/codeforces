#include <iostream>

using namespace std;

const int MOD = 1e9+7;
const int N = 1e6;

long long fact[N+1], invfact[N+1];

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

void make_fact() {
    fact[0]=1;
    for (long long i=1; i<=N; ++i) {
        fact[i] = (fact[i-1] * i%MOD)%MOD;
    }
}

void make_invfact() {
    invfact[N]=st(fact[N], MOD-2, MOD);
    for (long long i=N; i>0; --i) {
        invfact[i-1] = (invfact[i] * i%MOD)%MOD;
    }
}

int binomial_coef(int n, int k) {
    int ans=0;

    if (n>=k) {
        int denominator = (invfact[k]*invfact[n-k])%MOD;
        ans = (fact[n]*denominator)%MOD;
    }
    return ans;
}


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    make_fact();
    make_invfact();

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        cout << binomial_coef(n, k) << '\n';
    }
}