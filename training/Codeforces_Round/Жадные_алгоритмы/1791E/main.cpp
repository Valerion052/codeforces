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

        int arr[n];
        int count_ = 0;
        for (int i=0; i<n; ++i) {
            cin >> arr[i];
            if (arr[i]<0) {++count_;}
        }

        long long ans = 0;
        sort(arr, arr+n, [](int x, int y){return abs(x)<abs(y);});
        count_%=2;
        for (int k=0; k<n; ++k) {
            if (count_>0) {ans-=abs(arr[k]); --count_;}
            else {ans+=abs(arr[k]);}
        }
        cout << ans << "\n";
    }
}