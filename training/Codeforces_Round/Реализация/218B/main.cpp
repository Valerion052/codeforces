#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[m];
    for (int j=0; j<m; ++j) {cin >> arr[j];}

    if (m==1) {
       int v = min(arr[0], n);
       cout << (v*(2*arr[0]-v+1))/2 << ' ';
       cout << (v*(2*arr[0]-v+1))/2;
       return 0;
    }
    sort(arr, arr+m);

    int _min=0, _max=0;
    int n_min=n, n_max=n;

    for (int i=0; i<m&&n_min!=0; ++i) {
        int x = min(arr[i], n_min);
        _min+=(x*(arr[i]-x+1+arr[i]))/2;
        n_min-=x;
    }

    for (int k=m-1; k>=0&&n_max!=0; --k) {

        // cout << k << ' ';

        if (k==0) {
            _max+=arr[0];
            --arr[0];
            --n_max;
            sort(arr, arr+m);
            k=m;
        }
        else {
            if (arr[k]>=arr[k-1]) {
                int y = min(arr[k]-arr[k-1]+1, n_max);
                _max+=((y)*(2*arr[k]-y+1))/2;
                arr[k]-=y;
                n_max-=y;
                sort(arr, arr + m);
                k = m;
            }
            else {k=m;}
        }
        // cout << _max << "\n";
    }

    cout << _max << ' ' << _min;

}