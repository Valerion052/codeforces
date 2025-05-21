#include <iostream>
#include <set>

using namespace std;

set<long long> getD(long long n) {
    set<long long> ans;
    for (long long i=1; (long long)i*i<=n; ++i) {
        if (n%i==0) {
            ans.insert(i);
            if (i != n/i) {ans.insert(n/i);}
        }
    }
    return ans;
}

int main() {
    long long n;
    cin >> n;
    for (auto x: getD(n)) {cout << x << ' ';}
}