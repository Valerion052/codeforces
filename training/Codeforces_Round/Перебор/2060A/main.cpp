#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int arr[5];
        cin >> arr[0] >> arr[1] >> arr[3] >> arr[4];
        
        int ans=0;
        for (int i=-200; i<=200; ++i) {
            arr[2]=i;
            int count=0;
            for (int j=0; j<3; ++j) {
                if (arr[j]+arr[j+1]==arr[j+2]) {++count;}
            }
            ans=max(ans, count);
        }
        cout << ans << "\n";
    }
}