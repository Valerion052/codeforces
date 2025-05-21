#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int arr[51]{};
        for (int i=1; i<=n; ++i) {
            int a, b;
            cin >> a >> b;
            if (a<=10) {arr[b] = i;}
        }

        for (int j= 50; j>=0; --j) {if (arr[j]!=0) {cout << arr[j] << '\n'; break;}}
    }
}