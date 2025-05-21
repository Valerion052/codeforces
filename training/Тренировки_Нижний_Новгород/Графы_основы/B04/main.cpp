#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool check_b(vector<char> d) {
    bool flag = 1;
    for (int i=1; i<d.size(); ++i) {if (d[i]=='#') {flag = 0;}}

    if (flag){
        cout << "YES\n";
        for (int p=1; p<d.size(); ++p) {cout <<'b';}
        return 1;
    }
    return 0;
}

bool check_a(vector<char> d) {
    bool flag = 1;
    for (int i=1; i<d.size(); ++i) {

    }


    if (flag){
        cout << "YES\n";
        for (int p=1; p<d.size(); ++p) {cout <<'b';}
        return 1;
    }
    return 0;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<set<int>> arr(n+1);
    int d[n+1]{};
    int _max = 0;
    for (int i=0; i<m; ++i) {
        int u, v;
        cin >> u >> v;
        arr[u].insert(v);
        arr[v].insert(u);

        d[u] = arr[u].size();
        d[v] = arr[v].size();

        _max = max(_max, max(d[u], d[v]));
    }

    vector<char> dict(n+1, '#');
    int first_a = -1;
    for (int j=1; j<=n; ++j) {
        if (d[j]==_max) {dict[j]='b';}
        else {first_a=j;}
    }

    if (check_b(dict)) {return 0;}

    // for (auto x: arr[first_a]) {
    //     if (dict[x]=='#') {dict[x]='a';}
    // }



}