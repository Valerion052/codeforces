#include <iostream>
#include <vector>

using namespace std;

int n;
const int N = 1001;
vector<int> prime;
long long ans = 1e18+1;

void sieve() {
    bool d[N]{};
    for (int i=2; i<N; ++i) {
        if (!d[i]) {
            prime.push_back(i);
            for (int j=i; j<N; j+=i) {d[j]=1;}
        }
    }
}

long long st(int a, int n) {
    if (n==0) {return 1;}
    long long ans = st(a, n/2);
    ans*=ans;
    if (n%2!=0) {ans*=a;}
    return ans;
}

void solve(int index, long long value, int count, int max_exp) {

    if (count>n || index>=prime.size() || value>ans) {return;}
    if (count==n) {ans=min(ans, value); return;}

    for (int exp=0; exp<=max_exp; ++exp) {
        long long _st = st(prime[index], exp);
        if (value > ans/_st) {break;}
        long long value_new = value*_st;
        int count_new=count*(exp+1);
        solve(index+1, value_new, count_new, exp);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();
    cin >> n;
    solve(0, 1, 1, 60);
    cout << ans;
}