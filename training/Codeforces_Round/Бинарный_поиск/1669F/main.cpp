#include <iostream>
#include <algorithm>

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

        int arr[n], dp_1[n], dp_2[n];
        for (int i=0; i<n; ++i) {
            cin >> arr[i];
            if (i==0) {dp_1[i]=arr[i];}
            else {dp_1[i]=dp_1[i-1]+arr[i];}
        }

        dp_2[n-1]=arr[n-1];
        for (int k=n-2; k>=0; --k) {dp_2[k]=dp_2[k+1]+arr[k];}

        int l=-1, r=0;
        for (int j=n-1; j>=0; --j) {
            int* x = lower_bound(dp_1, dp_1+n, dp_2[j]);
            if (*x!=dp_2[j]) {continue;}
            
            int dist = distance(dp_1, x);

            // cout << *x << ' ' << v  << ' ' << dist << "\n";

            if (dist>=j) {break;}
            else {l = dist; r=j;}
        }

        if (l==-1) {cout << 0;} else {cout << l+1+n-r;} cout << "\n";
        
    }
}