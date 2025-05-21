#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    int arr[n+1]{};
    for (int i=1; i<=n; ++i) {cin >> arr[i];}

    while (m--) {
        int l, r, x;
        cin >> l >> r >> x;

        int counter = 0;
        for (int j=l; j<=r; ++j) {if(arr[j] < arr[x]) {++counter;}}
        if (l+counter == x) {cout << "Yes";} else {cout << "No";}
        cout << '\n';
        
        // С сортировкой за O(m*log(n)) не прходит тексты по времени работы

        // partial_sort_copy(arr+l-1, arr+r, sort+l-1, sort+r);
        // if (arr[x-1] == sort[x-1]) {cout << "Yes";} else {cout << "No";}

    }
}