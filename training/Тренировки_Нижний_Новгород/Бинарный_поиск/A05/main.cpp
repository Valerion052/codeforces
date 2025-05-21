#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int arr_n[n];
    for (int i=0; i<n; ++i) {cin >> arr_n[i];}

    int m;
    cin >> m;
    int arr_m[m];
    for (int j=0; j<m; ++j) {cin >> arr_m[j];}

    sort(arr_m, arr_m+m);
    sort(arr_n, arr_n+n);

    int counter = 0, lag = arr_n[0]+1;
    int result[500001]{};

    for (int a=0; a<n; ++a) {
        if (arr_n[a] == lag) {lag = arr_n[a]; continue;}
        int l = 0, r = m-1;

        while(l<=r) {
            int c = (l+r)/2;

            if (arr_m[c] == arr_n[a]) {
                ++counter;
                result[counter] = arr_n[a];
                break;
            }
            else if (arr_m[c] > arr_n[a]) {
                r = c - 1;
            }
            else {
                l = c + 1;
            }
        }
        lag = arr_n[a];
    }

    cout << counter << '\n';
    for (int b=0; b<counter; ++b) {cout << result[b+1] << ' ';}


}