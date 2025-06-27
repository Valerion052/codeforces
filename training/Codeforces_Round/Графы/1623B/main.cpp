#include <iostream>
#include <vector>
#include <set>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        set<pair<int, int>> d;
        pair<int, int> p[n];
        for (int i=0; i<n; ++i) {
            cin >> p[i].first >> p[i].second;
            d.insert(p[i]);
        }

        for (int i=0; i<n; ++i) {
            if (p[i].first==p[i].second) {
                cout << p[i].first << ' ' << p[i].second << ' ' << p[i].first << "\n";
                continue;
            }
            for (int j=p[i].first; j<=p[i].second; ++j) {
                
                pair<int, int> v_1= pair{p[i].first, j-1};
                pair<int, int> v_2= {j+1, p[i].second};
                bool flag_1=0, flag_2=0;
                
                if (p[i].first==j) {flag_1=1;}
                else {flag_1=d.count(v_1);}
                if (p[i].second==j) {flag_2=1;}
                else {flag_2=d.count(v_2);}

                if (flag_1 && flag_2) {
                    cout << p[i].first << ' ' << p[i].second << ' ' << j << "\n";
                    break;
                }
            }
        }
    }
}