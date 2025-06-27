#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        int ans=0;
        int local_ans=0;
        for (int x=2; x<=100; ++x) {
            int _n=n/x;
            int v=(_n*(_n+1))/2*x;
            if (v>=local_ans) {local_ans=v; ans=x;}
        }
        cout << ans << "\n";
        
    }
}