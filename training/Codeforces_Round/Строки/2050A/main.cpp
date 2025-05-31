#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;

        string arr[n+1]; arr[n]=string(800, 'f');
        for (int i=0; i<n; ++i) {cin>>arr[i];}

        int count=0;
        for (int i=0; i<=n; ++i) {
            count+=arr[i].size();
            if (count>m) {cout << i << "\n"; break;}
        }
    }   
}