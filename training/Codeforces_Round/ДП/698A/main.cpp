#include <iostream>
#include <vector>

using namespace std;

const int N = 105;
vector<int> arr(N, 3);
vector<int> dp(N, 0);
int ans=0;

void f(int x) {
    if (arr[x]==0) {dp[x]=0; ++ans;}

    else if (arr[x]==1) {
        if (dp[x-1]==1) {dp[x]=0; ++ans;}
        else {dp[x]=1;}
    }

    else if (arr[x]==2) {
        if (dp[x-1]==2) {dp[x]=0;  ++ans;}
        else {dp[x]=2;}
    }

    else {
        if (dp[x-1]==1) {dp[x]=2;}
        else if (dp[x-1]==2) {dp[x]=1;}
        else {dp[x]=3;}
    }
    
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    
    for (int i=1; i<=n; ++i) {cin >> arr[i];}
    for (int j=1; j<=n; ++j) {f(j);}

    cout << ans;
    
}