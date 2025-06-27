#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}
        
        int dp_1[n], dp_2[n];
        dp_1[0]=arr[0]==2;
        dp_2[n-1]=arr[n-1]==2;
        for (int i=1; i<n; ++i) {
            dp_1[i]=dp_1[i-1];
            dp_1[i]+=arr[i]==2;

            dp_2[n-1-i]=dp_2[n-i];
            dp_2[n-1-i]+=arr[n-1-i]==2;
        }

        int ans=-1;
        for (int i=0; i<n-1 && ans<0; ++i) {
            if (dp_1[i]==dp_2[i+1]) {ans=i+1;}
        }
        cout << ans << "\n";
    }
}