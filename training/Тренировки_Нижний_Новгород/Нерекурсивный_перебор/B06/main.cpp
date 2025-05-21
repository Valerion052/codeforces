#include <iostream>
#include <vector>
#include <set>

using namespace std;

int n, m;
vector<string> arr;

long long create_bit(string &s) {
    long long ans=0;
    for (int i=0; i<s.size(); ++i) {
        if (s[i]=='1') {ans|=(1ll<<i);}
    }
    return ans;
}

void DFS(vector<long long> &iter, int level, pair<long long, int> p, long long &mask, set<long long> &ans) {

    if (level==p.second) {
        long long value = ~p.first;
        for (int x: iter) {value^=(1ll<<x);}
        ans.insert(value);
        return;
    }

    for (int i=0; i<n; ++i) {
        if (mask>>i) {continue;}
        iter[level]=i;
        mask |= (1ll<<i);
        DFS(iter, level+1, p, mask, ans);
        mask &= ~(1ll<<i);
    }
}

set<long long> check_ans(set<long long> &local_ans, set<long long> &ans) {
    set<long long> ans_new;
    auto it = local_ans.begin();
    while (it!=local_ans.end()) { if (ans.count(*it)) {ans_new.insert(*it);} ++it;}
    return ans_new;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    pair<long long, int> p[m];
    for (int i=0; i<m; ++i) {
        string s;
        cin >> s >> p[i].second;
        p[i].first=create_bit(s);
    }


    long long mask=0;
    set<long long> ans, local_ans;
    vector<long long> iter(p[0].second);
    DFS(iter, 0, p[0], mask, ans);

    for (int j=1; j<m; ++j) {
        mask=0;
        local_ans.clear();
        iter.clear(); iter.resize(p[j].second);

        DFS(iter, 0, p[j], mask, local_ans);
        ans=check_ans(ans, local_ans);
    }

    cout << ans.size();

}