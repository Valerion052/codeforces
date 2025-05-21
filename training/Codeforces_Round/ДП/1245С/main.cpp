#include <iostream>
#include <vector>

using namespace std;

const int MOD=1e9+7;
const int N=2e5+1;
vector<long long> dp(N, -1);

string s;
vector<long long> arr;

int fib(int x) {
    if (x==0 || x==1) {return 1;}
    if (dp[x]!=-1) {return dp[x];}
    return dp[x] = (fib(x-1)%MOD+fib(x-2)%MOD)%MOD;
}


void check(char c) {
    int cnt=0;
    for (int i=1; i<s.size(); ++i) {
        
        if (s[i]==c) {
            if (s[i-1]==c || cnt==0) {++cnt;}
        }
        else {
            if (cnt>0) {arr.push_back(cnt); cnt=0;}
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> s; s="#"+s+"#";
    for (int i=1; i<s.size(); ++i) {if (s[i]=='m' || s[i]=='w') {cout << 0; return 0;}}
    
    check('u');
    check('n');
    long long ans=1;
    for (int x: arr) {ans=(ans*fib(x))%MOD;}
    cout << ans;
    
    


}