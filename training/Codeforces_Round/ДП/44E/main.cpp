#include <iostream>
#include <vector>

using namespace std;

int k, a, b;
string s;
const int N=201;
vector<int> ans;
vector<vector<bool>> dp(N, vector<bool>(N, 0));

void f(int x, vector<int> &local) {
    if (!ans.empty()) {return;}
    if (dp[x][local.size()]) {return;}
    if (x>=s.size()) {
        if (x==s.size() && local.size()==k) {ans=local;}
        return;
    }
    
    for (int i=a; i<=b && x+i<=s.size(); ++i) {
        local.push_back(i);
        f(x+i, local);
        local.erase(local.end()-1);
    }
    dp[x][local.size()]=1;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> k >> a >> b >> s;

    vector<int> local;
    f(0, local);

    if (ans.empty()) {cout << "No solution";}
    else {
        int it=0;
        for (int x: ans) {
            cout << s.substr(it, x) << "\n";
            it+=x;
        }
    }






}