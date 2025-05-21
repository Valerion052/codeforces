#include <iostream>
#include <vector>

using namespace std;

const int N=105;
vector<int> dp(N, -1e6);
vector<int> arr(N, 0);

int a(int x) {
    if (x<=1) {return 0;}
    if (dp[x]>-1e6) {return dp[x];}
    return dp[x]=max(arr[x]+a(x-2), arr[x]+a(x-1));
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    for (int i=2; i<=n+1; ++i) {cin >> arr[i];}
    cout << a(n+1);
}