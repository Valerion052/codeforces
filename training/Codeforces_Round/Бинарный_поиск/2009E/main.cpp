#include <iostream>

using namespace std;

long long calculate_lower(long long n, long long k, long long c) {return ((k+c)*(c-k+1))/2;}
long long calculate_upper(long long n, long long k, long long c) {
    int _n = n-(c-k+1);
    return (_n*(2*(c+1)+(_n-1)))/2;
}

bool check(long long n, long long k, long long c) {
    long long v_lower = calculate_lower(n, k, c);
    long long v_upper = calculate_upper(n, k, c);
    return v_lower-v_upper<=0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    int t; cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long l=k, r=k+n-1, ans=0;
        while (l<=r) {
            long long c=(l+r)/2;
            if (check(n, k, c)) {l=c+1; ans=c;}
            else {r=c-1;}
        }

        long long ans_1 = abs(calculate_lower(n, k, ans) - calculate_upper(n, k, ans));
        long long ans_2 = abs(calculate_lower(n, k, ans+1) - calculate_upper(n, k, ans+1));

        cout << min(ans_1, ans_2) << "\n";
    }
}