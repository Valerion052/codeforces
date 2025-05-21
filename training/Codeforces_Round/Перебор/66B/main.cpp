#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n+2];
    arr[0]=arr[n+1]=1e9;
    for (int i=1; i<=n; ++i) {cin >> arr[i];}

    int ans=0;
    for (int j=1; j<=n; ++j) {
        
        int local_ans=1;
        int l=j-1, r=j+1;
        bool flag_l=1, flag_r=1;

        while (flag_l || flag_r) {
            if (arr[l]<=arr[l+1]) {--l; ++local_ans;}
            else {flag_l=0;}
            
            if (arr[r]<=arr[r-1]) {++r; ++local_ans;}
            else {flag_r=0;}
        }

        ans=max(ans, local_ans);
    }
    cout << ans;
}