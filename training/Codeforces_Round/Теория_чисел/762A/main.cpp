#include <iostream>
#include <set>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, k; cin >> n >> k;

    set<long long> ans;
    for (long long i=1; i*i<=n; ++i) {
        if (n%i==0) {
            ans.insert(i);
            ans.insert(n/i);
        }
    }


    if (k>ans.size()) {cout << -1;}
    else {
        auto it = ans.begin();
        advance(it, k-1);
        cout << *it;
    }
}