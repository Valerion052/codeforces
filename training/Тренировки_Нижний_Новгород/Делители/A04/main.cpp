#include <iostream>
#include <vector>

using namespace std;

vector<long long> getD(long long n) {
    vector<long long> ans;
    for (long long i=2; (long long)i*i<=n; ++i) {
        while (n%i==0) {
            ans.push_back(i);
            n /= i;
        }
    }
    if (n!=1) {ans.push_back(n);}
    return ans;
}

int main() {
    long long n;
    cin >> n;
    vector<long long> ans = getD(n);
    cout << n << "=" << ans[0];
    for (int i=1; i<ans.size(); ++i) {cout << "*" << ans[i];}
}