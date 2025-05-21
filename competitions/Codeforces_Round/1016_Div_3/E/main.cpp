#include <iostream>
#include <set>

using namespace std;

bool check(int n, int (&arr)[], int c, int k) {

    set<int> value;
    int ans=0;

    for (int i=0; i<n; ++i) {
        if (arr[i]>=0 && arr[i]<=c) {value.insert(arr[i]);}
        if (value.size()==c+1) {++ans; value.clear();}
    }

    return ans >= k;

}

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

        int l=0, r=n, ans=-1;
        while (l<=r) {
            int c = (l+r)/2;
            if (check(n, arr, c, k)) {l=c+1; ans=c;}
            else {r=c-1;}
        }

        cout << ans+1 << "\n";
    }
}

