#include <iostream>
#include <map>

using namespace std;

const long long MOD = 1e9+7;
const int N = 1000001;
int d[N];
map<int, int> dict;

void sieve() {
    for (int i=2; i<N; ++i) {
        if (d[i]==0) {
            for (int j=i; j<N; j+=i) {
                d[j] = i;

            }
        }
    }
}

void addD(int n) {
    while (n>1) {
        ++dict[d[n]];
        n /= d[n];
    }
}

int main() {
    int n;
    cin >> n;

    sieve();

    for (int i=0; i<n; ++i) {
        int num;
        cin >> num;
        addD(num);
    }

    long long ans = 1;
    for (auto x: dict) {ans = ans * (x.second+1)%MOD;}

    cout << ans;
}