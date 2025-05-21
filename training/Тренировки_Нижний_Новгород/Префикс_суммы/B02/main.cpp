#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long arr[n], sum_suf[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}
    
    sum_suf[n-1] = arr[n-1];
    for (int j=n-2; j>=0; --j) {sum_suf[j] = min(sum_suf[j+1], arr[j]);}

    for (int k=0; k<n; ++k) {
        int l = k, r = n-1, ans = 0;
         while (l<=r) {
            int c = (l+r)/2;
            if (arr[k] > sum_suf[c]) {l=c+1; ans=c;}
            else {r=c-1;}
         }

        cout << max(ans - k -1, -1) << ' ';
    }

}