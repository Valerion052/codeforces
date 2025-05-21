#include <iostream>
#include <algorithm>
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

    map <string, int> d_name;
    map <int, string> d_num;
    map <int, vector<int>> check;
    for (int i=0; i<n; ++i) {string s; cin >> s; d_name[s]=i; d_num[i]=s;}
    for (int j=0; j<m; ++j) {
        string s_1, s_2; cin >> s_1 >> s_2;
        check[d_name[s_1]].push_back(d_name[s_2]);
        check[d_name[s_2]].push_back(d_name[s_1]);
    }

    int k=1;
    int total=1<<n;
    int mask=1;
    set<string> ans;
    for (int i=0; i<total; ++i) {
        set<string> local_ans;
        bool flag=1;
        for (int j=0; j<n && flag; ++j) {
            if ((i>>j)&mask) {
                if (check.count(j)) {
                    for (int x: check[j]) {
                        if ((i>>x)&mask) {flag=0; break;}
                        else {local_ans.insert(d_num[j]);}
                    }
                }
                else {local_ans.insert(d_num[j]);}
            }
        }
        if (local_ans.size()>ans.size() && flag) {ans=local_ans;}
    }
    
    cout << ans.size() << "\n";
    auto it=ans.begin(); while (it!=ans.end()) {cout << *it << "\n"; ++it;}
}