#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        int ans=0;
        while (k>0) {
            bool flag=1;
            for (int j=0; j<n-1 && flag; ++j) {
                if (arr[j]>=arr[j+1]) {ans=j+1;}
                else if (j==0) {flag=0; ans=j;}
                else {flag=0;}
            }
            if (ans==n-1) {ans=-2; break;}
            else {++arr[ans];}
            --k;
        }
        cout << ans+1 << "\n";
    }
}