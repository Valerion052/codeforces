#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int arr[3];
        for (int i=0; i<3; ++i) {cin >> arr[i];}
        sort(arr, arr+3);

        int n;
        cin >> n;
        int value = n-(2*arr[2]-arr[1]-arr[0]);
        if (value>=0 && value%3==0) {cout << "YES\n";} else {cout << "NO\n";}
    }
}