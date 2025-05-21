#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    // int arr[5] = {1, 5, 10, 20, 100};
    // int dp[n+1]{};
    // for (int k=1; k<=n; ++k) {dp[k]=1e9;}

    // for (int i=1; i<=n; ++i) {
    //     for (int j: arr) {
    //         if (i-j>=0) {dp[i] = min(dp[i-j]+1, i);}
    //     }
    // }

    // cout << dp[n];

    int arr[5] = {100, 20, 10, 5, 1};
    int counter=0;
    for (int x: arr) {
        counter+=n/x;
        n%=x;
    }
    cout << counter;
}