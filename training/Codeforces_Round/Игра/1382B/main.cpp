#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        for (int i=0; i<n; ++i) {cin>>arr[i];}
        
        int it=0;
        while (it<n && arr[it]==1) {++it;}

        if (it==n) {
            if (it%2==0) {cout << "Second\n";}
            else {cout << "First\n";}
        }
        else {
            if (it%2==0) {cout << "First\n";}
            else {cout << "Second\n";}
        }
    }
}