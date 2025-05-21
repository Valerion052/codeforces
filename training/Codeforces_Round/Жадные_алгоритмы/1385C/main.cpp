#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        int it = n-1;
        while (it > 0 && arr[it - 1] >= arr[it]) {--it;}
		while (it > 0 && arr[it - 1] <= arr[it]) {--it;}
        cout << it << '\n';
    }

}