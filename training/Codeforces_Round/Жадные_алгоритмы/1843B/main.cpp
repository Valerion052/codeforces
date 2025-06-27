#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        
        long long sum=0;
        for (int i=0; i<n; ++i) {cin >> arr[i]; sum+=abs(arr[i]);}

        int count=0;
        bool flag=0;
        for (int i=0; i<n; ++i) {
            if (!flag && arr[i]<0) {flag=1; ++count;}
            if (arr[i]>0) {flag=0;}
        }
        cout << sum << ' ' << count << "\n";
    }

}