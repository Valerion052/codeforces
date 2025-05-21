#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    string s;
    cin >> s >> n;

    string arr[n];

    for (int i=0; i<n; ++i) {cin >> arr[i];}
    sort(arr, arr+n);

    for (int j=0; j<=n; ++j) {
        if (j==n) {cout << s; return 0;}
        if (arr[j].substr(0, s.size())==s) {cout << arr[j]; return 0;}
    }
}