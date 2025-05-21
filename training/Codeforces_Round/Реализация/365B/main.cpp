#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n+1];
    arr[n]=1e9;
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    if (n==1) {cout << 1; return 0;}

    int local_ans=2, ans=2;
    for (int j=2; j<=n; ++j) {
        if (arr[j-2]+arr[j-1]==arr[j]) {++local_ans;}
        else {
            ans=max(ans, local_ans);
            local_ans=2;
        }
    }
    cout << ans;


}