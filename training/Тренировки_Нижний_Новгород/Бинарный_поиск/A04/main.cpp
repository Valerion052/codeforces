#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    long long arr[n], arr_sort[n];

    for (int i=0; i<n; ++i) {cin >> arr[i]; arr_sort[i] = arr[i];}

    sort(arr_sort, arr_sort+n);

    for (int j=0; j<n; ++j) {
        int l = 0, r = n-1;
        bool flag = false;

        while (l<=r) {
            int c = (l+r)/2;

            if (arr_sort[c] == -arr[j]) {
                flag = true;
                break;
            }
            else if (arr_sort[c] > -arr[j]) {r = c - 1;}
            else {l = c + 1;}
        }
        if (flag) {cout << "Yes";} else {cout << "No";}
        cout << '\n';
    }
}