#include <iostream>

using namespace std;

const int MOD = 1e9+7;

long long st(long long x, long long y){
    long long ans = 1;
    x = x%MOD;
    if (y==0) {return 1%MOD;}

    while (y>0) {
        if (y%2==1) {ans = ans * x%MOD;}
        x = (x*x)%MOD;
        y/=2;
    }
    return ans;
}

long long C(int a, int b) {
    long long fact_N = 1;
    long long fact_K = 1;
    long long fact_N__K = 1;

    for (int i=2; i<=a; ++i) {
        fact_N = (fact_N*i)%MOD;
        if (i<=b) {fact_K = (fact_K*i)%MOD;}
        if (i<=a-b) {fact_N__K = (fact_N__K*i)%MOD;}
    }

    long long fact_den = (fact_K * fact_N__K)%MOD;
    long long inv_fact_den = st(fact_den, MOD-2);
    long long ans = (fact_N * inv_fact_den)%MOD;

    return ans;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    int arr_sum[n];
    for (int i=0; i<n; ++i) {
        cin >> arr[i];
        if (i==0) {arr_sum[i]=arr[i];}
        else {arr_sum[i] = arr_sum[i-1] + arr[i];}
    }

    long long ans = 1;
    for (int j=1; j<n; ++j) {        
        int _k = arr[j] - 1;
        int _n = arr_sum[j-1] + _k;
        ans = (ans * C(_n, _k))%MOD;
    }

    cout << ans;
}