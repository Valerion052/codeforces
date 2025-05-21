#include <iostream>
#include <algorithm>

using namespace std;

bool check(int arr[], int l, int r) {
    int value=-1;
    bool flag=1;
    while (l<r && flag) {
        if (arr[l]!=arr[r]) {
            if (value==-1) {value=arr[l];}
            
            if (value==arr[l]) {++l;}
            else if (value==arr[r]) {--r;}
            else {flag=0;}
        }
        else {++l; --r;}
    }
    return flag;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        int l=0, r=n-1;
        bool flag_1 = check(arr, l, r);
        reverse(arr, arr+n);
        bool flag_2 = check(arr, l, r);

        if (flag_1 || flag_2) {cout << "YES\n";} else {cout << "NO\n";}
    }
}