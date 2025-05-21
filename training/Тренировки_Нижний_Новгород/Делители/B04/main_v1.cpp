#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

const int N = 100001;
map<int, set<int>> d;

void sieve() {
    for (int i=1; i<N; ++i) {
        for (int j=i; j<N; j+=i) {
            d[j].insert(i);
        }
    }
}


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();

    int n;
    cin >> n;

    int arr_x[n+1];

    for (int i=1; i<=n; ++i) {
        int y;
        cin >> arr_x[i] >> y;

        set<int> result = d[arr_x[i]];

        if (y!=0) {
            // set<int> check = d[arr_x[i-1]];
            // for (int j=i-y; j<i-1; ++j) {
            //     set<int> value = d[arr_x[j]];
            //     check.insert(value.begin(), value.end());
            // }
            // for (auto c: check) {result.erase(c);}
            for (int j=i-y; j<=i-1; ++j) {
                set<int> value = d[arr_x[j]];
                for (auto v: value) {result.erase(v);}
            }
        }
        
        cout << result.size() << '\n';

    }
}