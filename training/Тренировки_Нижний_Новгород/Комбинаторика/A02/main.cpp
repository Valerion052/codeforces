#include <iostream>

using namespace std;

const int MOD = 1e9+7;

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


int main () {
    int n, m;
    cin >> n >> m;

    long long fact_N = 1;
    long long fact_K = 1;
    long long fact_N__K = 1;

    for (int i=1; i<=n+m-2; ++i) {
        
        fact_N = (fact_N * i)%MOD;
        
        if (i<=n-1) {
            fact_K = (fact_K * i)%MOD;
        }
        if (i<=m-1) {
            fact_N__K = (fact_N__K * i)%MOD;
        }
    }

    long long fact_nume = fact_N;
    long long fact_den = (fact_K * fact_N__K)%MOD;
    long long inv_fact_den = st(fact_den, MOD-2, MOD);
    long long result = (fact_nume * inv_fact_den)%MOD;

    cout << result;    
}