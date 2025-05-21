#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int N=8;

int make_mask(string s) {
    int mask=0;
    if (find(s.begin(), s.end(), 'A')!=s.end()) {mask|=(1<<0);}
    if (find(s.begin(), s.end(), 'B')!=s.end()) {mask|=(1<<1);}
    if (find(s.begin(), s.end(), 'C')!=s.end()) {mask|=(1<<2);}
    return mask;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector <int> d(N, 1e7);
    for (int i=0; i<n; ++i) {
        string s;
        int num;
        cin >> num >> s;
        int j = make_mask(s);
        d[j] = min(d[j], num);
    }

    int ans=1e7;
    int total = (1<<N);
    int mask=1;
    for (int j=0; j<total; ++j) {
        int check=0;
        int cost=0;
        for (int k=0; k<N; ++k) {
            int v=(j>>k)&mask;
            if (v) {check|=k; cost+=d[k];}
        }
        if (check==7) {ans=min(ans, cost);}
    }
    if (ans>=1e7) {cout << -1;} else {cout << ans;}
}