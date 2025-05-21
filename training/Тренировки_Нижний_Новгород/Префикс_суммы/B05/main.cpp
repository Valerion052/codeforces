#include <iostream>

using namespace std;

int n, m;

long long search(long long arr[], long long k) {
    int l=0, r=n+1, ans=0;
    while (l<=r) {
        int c = (l+r)/2;
        if (arr[c] >= k) {r=c-1; ans = c;}
        else {l=c+1;}
    }
    cout << ans << ' ' << k - arr[ans-1] << endl;
    return 0;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n >> m;

    long long arr[n+1]{};
    for (int i=1; i<=n; ++i) {
        long long num;
        cin >> num;
        arr[i] = arr[i-1] + num;
    }

    long long arr_m[m];
    for (int j=0; j<m; ++j) {cin >> arr_m[j];}
    for (int k=0; k<m; ++k) {search(arr, arr_m[k]);}

    

    
}