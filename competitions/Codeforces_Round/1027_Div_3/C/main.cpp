#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n+1]; arr[n]=1e9;
        for (int i=0; i<n; ++i) {cin >> arr[i];}
        

        int ans=0;
        int local=1;
        for (int i=1; i<=n; ++i) {
            if (arr[i]-arr[i-1]<=1) {if (arr[i]-arr[i-1]!=0) {++local;}}
            else {
                ans+=local/2+(local%2!=0 ? 1:0);
                local=1;
            }
        }
        cout << ans << "\n";


        
        
    }
}