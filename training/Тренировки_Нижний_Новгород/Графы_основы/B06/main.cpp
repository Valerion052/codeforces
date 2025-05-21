#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    ++n;

    int arr[n+1]{};
    for (int i=1; i<=n; ++i) {cin >> arr[i];}

    bool flag= 1;

    for (int j=1; j<n && flag; ++j) {
        if (min(arr[j], arr[j+1]) != 1) {flag=0;}
    }

    if (flag) {cout << "perfect";}
    else {
        cout << "ambiguous\n0 ";

        int it_1 = 1;
        for (int k=2; k<=n; ++k) {
            int count = arr[k];
            while (count>0) {
                for (int c=it_1; c<it_1+arr[k-1] && count>0; ++c) {cout << c << ' '; --count;}
            }
            it_1+=arr[k-1];
        }

        cout << "\n0 ";
        int it_2 = 1;
        for (int _i=2; _i<=n; ++_i) {
            for (int _j=0; _j<arr[_i]; ++_j) {cout << it_2 << ' ';}
            it_2+=arr[_i-1];
        }
    }
}