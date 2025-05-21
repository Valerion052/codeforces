# include <iostream>
# include <algorithm>

using namespace std;

bool f(int x, int y) {
    return x>y;
};

int main() {
    int t;
    cin >>t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        

        for (int k=0; k<n; ++k) {
            cin >> arr[k];
        }
        sort(arr, arr+n, f);

        for (int c=0; c<n; ++c) {
            cout << arr[c] << ' ';
        }
    }
}