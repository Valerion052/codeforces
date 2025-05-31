#include <iostream>
#include <vector>

using namespace std;

const int N = 1e5+1;
vector<long long> arr(N, 0);
vector<long long> dp(N, -1);

long long f(int x) {
    if (x==0) {return 0;}
    if (x==1) {return dp[x]=arr[x];}
    if (dp[x]!=-1) {return dp[x];}
    return dp[x]=max(arr[x]*x+f(x-2), f(x-1));
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    for (int i=0; i<n; ++i) {int num; cin>>num; ++arr[num];}
    cout << f(N-1);
}