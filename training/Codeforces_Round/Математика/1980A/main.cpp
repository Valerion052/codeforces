#include <iostream>
#include <map>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, m;
        string s;
        cin >> n >> m >> s;

        map<char, int> d = {{'A', 0}, {'B', 0}, {'C', 0}, {'D', 0}, {'E', 0}, {'F', 0}, {'G', 0}};
        for (int x: s) {++d[x];}

        int ans=0;
        for (auto [k, v]: d) {
            ans-=min(0, v-m);
        }
        cout  << ans << "\n";
    }
}




