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

        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        int value=0;
        int ans=1e9;
        for (int j=0; j<n; ++j) {
            value+=arr[j];
            int local_value=0, local_ans=j+1, l_k=0;
            for (int k=j+1; k<n && local_value<=value; ++k) {
                if (local_value==value) {
                    local_ans=max(local_ans, l_k);
                    local_value = l_k = 0;
                }
                local_value+=arr[k];
                ++l_k;
            }
            if (local_value==value) {
                local_ans=max(local_ans, l_k);
                local_value = l_k = 0;
            }
            if (local_value==0) {ans=min(ans, local_ans);}
        }
        cout << ans << "\n";
    }



}