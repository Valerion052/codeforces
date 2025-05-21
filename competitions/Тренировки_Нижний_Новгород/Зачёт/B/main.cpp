#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a = n/2;
    if (n%2==0) {--a;}

    set<multiset<int>> ans;

    for (int i=a; i>0; --i) {
        for (int j=a; j>0; --j) {
            multiset<int> local;
            local.insert(i);
            local.insert(j);
            local.insert(n-i-j);
            auto min_1 = local.begin();
            auto min_2 = local.begin();
            auto max = local.end();
            ++min_2;
            --max;
            // cout << *min_1 << ' ' << *min_2 << ' ' << *max << '\n';
            if (*min_1+*min_2>*max) {
                ans.insert(local);
            }
        }
    }

    cout << ans.size();

    // for (auto x: ans) {
    //     for (auto y: x) {cout << y << ' ';}
    //     cout << '\n';
    // }
}