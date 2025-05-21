#include <iostream>
#include <vector>

using namespace std;

const int N=1e4;
vector<int> dp(N, -1e6);
vector<int> arr(N, -1e6);

int f(int x) {
    if (x<0) {return -1e6;}
    if (x==0) {return arr[x];}
    if (dp[x]!=-1e6) {return dp[x];}
    return dp[x]=arr[x]+max(max(f(x-1), f(x-3)), f(x-5));
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    string s;
    cin >> n >> s;
    for (int i=0; i<n; ++i) {
        if (s[i]=='"') {arr[i]=1;}
        else if (s[i]=='.') {arr[i]=0;}
    }
    cout << max(-1, f(n-1));
}