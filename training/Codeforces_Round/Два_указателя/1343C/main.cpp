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

        int arr[n+1];
        for (int i=0; i<n; ++i) {cin >> arr[i];}
        
        arr[n] = arr[n-1]>0 ? -1 : 1;
        bool flag=arr[0]>0 ? 1 :0;

        long long sum=0;
        int local_min = -1e9-7, local_max=0;

        for (int j=0; j<=n; ++j) {

            if (arr[j]>0 && !flag) {flag=1; sum+=local_min; local_min = -1e9-7;}
            else if (arr[j]<0 && flag) {flag=0; sum+=local_max; local_max=0;}

            if (flag) {
                if (arr[j]>0) {local_max=max(arr[j], local_max);}
            }
            if (!flag) {
                if (arr[j]<0) {local_min=max(arr[j], local_min);}
            }
        }
        cout << sum << "\n";
    }
}