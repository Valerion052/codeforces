#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int arr[n]{};
    for (int i=0; i<n; ++i) {
        if (s[i]=='w') {arr[i] = -10000;}
        else if (s[i]=='"') {arr[i] = 1;}
    }

    int dp[n]{};
    for (int j=1; j<n; ++j) {
        int value = dp[j-1];
        if (j>=3) {value = max(value, dp[j-3]);}
        if (j>=5) {value = max(value, dp[j-5]);}
        dp[j] = value + arr[j];
    }
    
    if (dp[n-1]<0) {cout << -1;} else {cout << dp[n-1];}
}