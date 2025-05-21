#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}
        sort(arr, arr+n, [](int x, int y){return x>y;});

        int counter = 0;
        long long sum = 0;
        for (int j=0; j<n; ++j) {
            sum+=arr[j];
            if((counter+1)*(long long)x<=sum) {++counter;}
            else {break;}
        }
        cout << counter << '\n';
    }
}