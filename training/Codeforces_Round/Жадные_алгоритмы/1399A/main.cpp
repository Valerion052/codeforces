#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        bool flag = true;

        for (int i=0; i<n; ++i) {cin >> arr[i];}

        sort(arr, arr+n);

        for (int j=0; j<n-1; ++j) {
            if ((arr[j+1]-arr[j]) > 1) {flag=false; break;}
        }

        if (flag) {cout << "YES" << endl;} else {cout << "NO" << endl;}
        
    }
}