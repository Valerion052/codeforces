#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        
        vector<int> arr(n);
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        long long ans=0;
        if (n%2!=0) {
            for (int i=1; i<n-1; i+=2) {ans+=max(0, max(arr[i-1], arr[i+1])+1-arr[i]);}
        }
        else {
            long long dp_L[n]{}, dp_R[n]{};
            long long value_L=0, value_R=0;
            for (int i=1; i<n-1; i+=2) {
                value_L+=max(0, max(arr[i-1], arr[i+1])+1-arr[i]);
                value_R+=max(0, max(arr[n-i], arr[n-i-2])+1-arr[n-i-1]);
                dp_L[i]=value_L;
                dp_R[n-i-2]=value_R;
            }
            ans=min(dp_L[n-3], dp_R[1]);
            for (int i=1; i<n-1; i+=2) {ans=min(ans, dp_L[i]+dp_R[i+2]);}
        }
        cout << ans << "\n";
    }
}