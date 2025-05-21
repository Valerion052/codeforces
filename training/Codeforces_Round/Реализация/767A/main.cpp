#include <iostream>

using namespace std;

const int N = 1e5+1;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[N]{};
    for (int i=1; i<=n; ++i) {int x; cin >> x; arr[x]=i;}

    int l=1;
    int r=n;
    while (l<=n) {
        for (int j=r; j>0; --j) {
            if (arr[j]<=l) {cout << j << ' '; --r;}
            else {break;}
        }
        cout << "\n";
        ++l;
    }
}