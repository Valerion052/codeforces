#include <iostream>
#include <ranges>
#include <vector>
#include <map>

using namespace std;

void go_1(map<int, vector<int>> &d, int start, int end) {
    int lag = start;
    int cost=0, m=d[start].size();

    for (auto [x, y]: d) {
        if (x>start) {cost+=x-lag; lag=x; m+=y.size();}
        if (x==end) {break;}
    }

    cout << cost << ' ' << m << "\n";
    for (auto [x, y]: d) {
        if (x>=start) {
            for (int k: y) {cout << k+1 << ' ';}
        }
        if (x==end) {break;}
    }
    cout << "\n";
}

void go_2(map<int, vector<int>> &d, int start, int end) {
    int lag = start;
    int cost=0, m=d[start].size();

    for (auto it=d.rbegin(); it!=d.rend(); ++it) {
        auto [x, y] = *it;
        if (x<start) {cost+=lag-x; lag=x; m+=y.size();}
        if (x==end) {break;}
    }

    cout << cost << ' ' << m << "\n";
    for (auto it=d.rbegin(); it!=d.rend(); ++it) {
        auto [x, y] = *it;
        if (x<=start) {
            for (int k: y) {cout << k+1 << ' ';}
        }
        if (x==end) {break;}
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n=s.size();
        map<int, vector<int>> d;

        for (int i=0; i<n; ++i) {d[s[i]-'a'+1].push_back(i);}

        int start = s[0]-'a'+1;
        int end = s[n-1]-'a'+1;

        if (start<end) {go_1(d, start, end);}
        else {go_2(d, start, end);}
    }
}