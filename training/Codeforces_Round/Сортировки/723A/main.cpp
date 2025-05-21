#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int result;
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr+3);
    result = (arr[1] - arr[0]) + (arr[2] - arr[1]);
    cout << result;

}