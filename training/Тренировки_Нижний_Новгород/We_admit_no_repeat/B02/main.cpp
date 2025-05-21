#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    int arr_counter[3];
    
    arr_counter[0] = count(arr, arr+n, 1);
    arr_counter[1] = count(arr, arr+n, 2);
    arr_counter[2] = count(arr, arr+n, 3);

    sort(arr_counter, arr_counter+3);
    cout << arr_counter[0] + arr_counter[1];

}
