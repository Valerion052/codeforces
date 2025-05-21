#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {

        int n, k;
        cin >> n >> k;

        int a[n], b[n];
        for (int i=0; i<n; ++i) {cin >> a[i];}
        for (int j=0; j<n; ++j) {cin >> b[j];}

        sort(a, a+n);
        sort(b, b+n, [](int x, int y){return x>y;});

        for (int c=0; c<n; ++c) {
            if (k==0) {break;}
            else if (a[c]<b[c]) {a[c]=b[c]; --k;}
        }

        int result = accumulate(a, a+n, 0);

        cout << result << endl;
    }
}