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
        int n, m;
        
        cin >> n;
        int arr_n[n+1]{};
        for (int i=1; i<=n; ++i) {int num_1; cin >> num_1; arr_n[i]=arr_n[i-1]+num_1;}
        
        cin >> m;
        int arr_m[m+1]{};
        for (int j=1; j<=m; ++j) {int num_2; cin >> num_2; arr_m[j]=arr_m[j-1]+num_2;}

        int _max = 0;
        for (int _n=0; _n<=n; ++_n) {
            for (int _m=0; _m<=m; ++_m) {
                _max = max(_max, arr_n[_n]+arr_m[_m]); 
            }
        }

        cout << _max << "\n";
    }
}