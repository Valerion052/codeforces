#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, x;
    cin >> n >> x;

    pair<int, int> p[n];
    for (int j=0; j<n; ++j) {cin >> p[j].first >> p[j].second;}

    bool flag=1;
    int start = 7-x;
    for (int i=1; i<n && flag; ++i) {
        
        int count=0;
        bool d[7]{};

        d[p[i].first]=d[7-p[i].first]=d[p[i].second]=d[7-p[i].second]=1;

        for (int k=1; k<7; ++k) {if (!d[k]) {if (k==start) {d[start]=1;}}}
        for (int k=1; k<7; ++k) {if (!d[k]) {start=k; ++count;}}
        if (count!=1) {flag=0;}
    }

    if (flag) {cout << "YES";} else {cout << "NO";}

}