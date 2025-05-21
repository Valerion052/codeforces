#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        vector<int> a(n), b(n);
        for (int i=0; i<n; ++i) {cin >> a[i];}
        for (int i=0; i<n; ++i) {cin >> b[i];}

        for (int x: a) {cout << *lower_bound(b.begin(), b.end(), x)-x << ' ';} cout << "\n";
        
        
        int value = b[n-1];
        vector<int> ans(n); ans[n-1]=value-a[n-1];
        for (int j=n-2; j>=0; --j) {
            if (a[j+1]>b[j]) {value=b[j];}
            ans[j]=value-a[j];
        }
        for (int x: ans) {cout << x << ' ';} cout << "\n";
    }   
}