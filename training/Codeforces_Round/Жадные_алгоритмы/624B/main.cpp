#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n];

    for (int i=0; i<n; ++i) {cin >> arr[i];}
    sort(arr, arr+n, [](int x, int y){return x>y;});

    int lag = 1e9+1;
    long long counter = 0;

    for (int j=0; j<n && lag>0; ++j) {

        if (arr[j] < lag) {lag = arr[j];}
        else {--lag;}
        counter += lag;
    }

    cout << counter;
}