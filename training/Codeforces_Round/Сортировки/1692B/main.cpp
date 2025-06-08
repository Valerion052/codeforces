#include <iostream>

using namespace std;

const int N=10001;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[N]{};
        for (int i=0; i<n; ++i) {int x; cin >> x; ++arr[x];}
        
        int ans=n;
        bool flag=0;
        for (int i=0; i<N; ++i) {
            if (arr[i]>1) {
                ans-=arr[i]-1;
                if (arr[i]%2==0) {if (flag) {flag=0;} else {flag=1;}}
            }
        }
        cout << ans-flag << "\n";
    }
}
