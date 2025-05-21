#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> adj(n+1);
    for (int i=0; i<m; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    map<int, int> d;
    set<int> s;

    for (int j=1; j<=n; ++j) {
        s.insert(adj[j].size());
        ++d[adj[j].size()];
    }

    if (s.size()>2) {cout << "unknown topology";}
    else {
        if (s.size()==1) {
            if (d[*s.begin()]==n && *s.begin()==2) {cout << "ring topology";}
            else {cout << "unknown topology";}
        }
        else {
            auto end = s.end(); --end;
            if (*end==n-1 && *s.begin()==1) {
                if (d[*end]==1 && d[1]==n-1) {cout << "star topology";}
                else {cout << "unknown topology";}
            }
            else if (*end==2 && *s.begin()==1) {
                if (d[*end]==n-2 && d[1]==2) {cout << "bus topology";}
                else {cout << "unknown topology";}
            }
            else {cout << "unknown topology";}
        }
    }
}