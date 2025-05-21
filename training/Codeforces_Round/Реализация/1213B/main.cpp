#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n], check[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}
        check[n-1]=arr[n-1];
        for (int j=n-2; j>=0; --j) {check[j]=min(arr[j], check[j+1]);}

        int ans=0;
        for (int k=0; k<n; ++k) {if (arr[k]>check[k]) {++ans;}}
        cout << ans << "\n";
    }
}