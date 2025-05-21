#include <iostream>
#include <map>
#include <set>


using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        auto cmp = [](long long x, long long y){return x>y;};

        map<int, long long> dict;
        multiset<long long, decltype(cmp)> result(cmp);

        for (int i=0; i<k; ++i) {
            int b, c;
            cin >> b >> c;
            dict[b] += c;
        }

        for (auto j: dict) {result.insert(j.second);}

        long long sum = 0;
        auto it = result.begin();
        
        while (n && it!=result.end()) {sum += *it; --n; ++it;}

        cout << sum << '\n';

    }
}