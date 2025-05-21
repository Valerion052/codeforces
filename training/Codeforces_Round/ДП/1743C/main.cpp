#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        s+="0";
        int arr[n+1]{};
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        int ans=0;
        int _sum=0, _min=0;

        for (int j=0; j<=n; ++j) {
            if (s[j]=='0') {ans+=_sum-_min; _sum=_min=arr[j];}
            else {_sum+=arr[j]; _min=min(_min, arr[j]);}
        }        
        cout << ans << "\n";
    }
}