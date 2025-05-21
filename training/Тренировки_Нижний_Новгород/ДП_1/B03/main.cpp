#include <iostream>

using namespace std;

int main() {
    int n, arr[3];
    cin >> n >> arr[0] >> arr[1] >> arr[2];

    int dp[n+1]{};
    for (int i=1; i<=n; ++i) {dp[i]=-1;}

    for (int j=1; j<=n; ++j) {
        for (int k=0; k<3; ++k) {
            if (j-arr[k]>=0) {
                if (dp[j-arr[k]]!=-1) {
                    dp[j] = max(dp[j], dp[j-arr[k]]+1);
                }
            }
        }
    }

    cout << dp[n];
}

