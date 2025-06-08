#include <iostream>
#include <unordered_map>

using namespace std;

const int N = 1e6+1;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n, m , k; cin >> n >> m >> k;
        int a[n];
        int b[N]{};
        for (int i=0; i<n; ++i) {cin >> a[i];}
        for (int i=0; i<m; ++i) {int num; cin >> num; ++b[num];}

        int count=0, ans=0;
        unordered_map<int, int> check;;
        for (int i=0; i<n; ++i) {
            ++check[a[i]];
            if (check[a[i]]<=b[a[i]] && b[a[i]]>0) {++count;}
            if (i>=m-1) {
                int drop_index=i-(m-1);
                if (count>=k) {++ans;}
                --check[a[drop_index]];
                if (check[a[drop_index]]<b[a[drop_index]] && b[a[drop_index]]>0) {--count; count=max(count, 0);}
            }
        }
        cout << ans << "\n";













        // while (l<=n-k && r<n) {
        //     if (b[a[r]]>0) {

        //         // cout << a[r] << ' ' << check[a[r]] << ' ';
        //         ++check[a[r]];
        //         // cout << check[a[r]] << "\n";
                
        //         if (check[a[r]]>b[a[r]]) {
        //             // cout << "sdfsdf";
        //             l=r; count=0; check.clear();}
        //         else {
        //             // cout << a[r] << ' ' << count; 
        //             if (count<k) {++count;}
        //             // cout << ' ' << count; 
        //             if (count==k) {--check[a[l]]; ++ans; ++l;}
        //             ++r;
        //             // cout << ' ' << count << "\n"; 
        //         }
        //     }
        //     else {
        //         // cout << a[r] << " end\n";
        //         ++r; l=r; count=0; check.clear();}
        // }
        // cout << ans << "\n";
    }
}
