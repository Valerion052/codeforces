#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[2*n];

    for (int i=0; i<2*n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr+n*2);

    if (arr[n-1] < arr[n]) {cout << "YES";} else {cout << "NO";}

}
