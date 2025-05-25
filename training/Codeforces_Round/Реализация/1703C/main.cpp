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
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        for (int i=0; i<n; ++i) {
            int b; cin >> b;
            string s; cin >> s;

            for (char c: s) {
                if (c=='U') {--arr[i]; if (arr[i]==-1) {arr[i]=9;}}
                else {++arr[i]; if (arr[i]==10) {arr[i]=0;}}
            }
        }
        for (int i=0; i<n; ++i) {cout << arr[i] << ' ';} cout << "\n";
    }
}