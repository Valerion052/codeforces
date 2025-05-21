#include <iostream>
#include <algorithm>

using namespace std;

int count(int (&arr)[], int n, int k) {
    int l=0, r=n-1;
    while (l<=r) {
        int c = (l+r)/2;
        if (arr[c]>=k) {l=c+1;}
        else {r=c-1;}
    }
    return l;
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
        sort(arr, arr+n, [](int x, int y){return x>y;});

        int value = 1;
        bool flag=1;
        for (int j=0; j<n && flag; ++j) {
            if (arr[j] != count(arr, n, value)) {flag=0;}
            ++value;
        }
        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
}