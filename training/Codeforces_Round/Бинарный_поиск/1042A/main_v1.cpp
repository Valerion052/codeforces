#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    sort(arr, arr+n);
    int sum = accumulate(arr, arr+n-1, 0, [&](int a1, int a2){return a1+(arr[n-1]-a2);});

    if (m - sum <=0) {cout << arr[n-1];}
    else {
        int result = (m-sum)/n + arr[n-1];
        if ((m-sum)%n != 0) {++result;}
        cout << result;
    }
    cout << ' ' << arr[n-1] + m;
}