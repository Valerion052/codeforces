#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    int arr[n+2];
    arr[0]=arr[n+1]=k;
    for (int i=1; i<=n; ++i) {cin >> arr[i];}

    int dp[n+2];
    dp[0]=dp[n+1]=k;
    int counter = 0;

    for (int j=1; j<=n; ++j) {

        if (arr[j]+dp[j-1]<k) {
            counter += k-arr[j] - dp[j-1];
            dp[j]=k-dp[j-1];
        }
        else {dp[j] = arr[j];}
    }

    cout << counter << '\n';
    for (int k=1; k<=n; ++k) {cout << dp[k] << ' ';}

}