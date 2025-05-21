#include <iostream>

using namespace std;


pair<string, bool> _max(int n, int m) {

    if (m==0 && n>1) {return {"", 0};}

    int k=9;
    string ans = "";
    while (m>0) {
        if (m-k>=0) {ans+=to_string(k); m-=k;}
        else {--k;}
    }
    ans+=string(max(n-(int)ans.size(), 0), '0');
    return {ans, ans.size()==n};
}

pair<string, bool> _min(int n, int m) {

    if (m==0 && n==1) {return {"0", 1};}

    int k=9;
    string ans="";
    while (m>0) {
        if (m-k>=0) {ans=to_string(k)+ans; m-=k;}
        else {--k;}
    }

    if (ans.size()!=n && !ans.empty()) {
        int v = ans[0]-'0'; --v;
        ans=to_string(v)+ans.substr(1, ans.size()-1);
        ans=string(max(0, n-(int)ans.size()-1), '0')+ans;
        ans="1"+ans;
    }
    return {ans, ans.size()==n};
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    int n, m; cin >> n >> m;

    pair<string, bool> _1 = _min(n, m);
    pair<string, bool> _2 = _max(n, m);

    if (_1.second) {cout << _1.first;} else {cout << -1;} cout << ' ';
    if (_2.second) {cout << _2.first;} else {cout << -1;}

}

    