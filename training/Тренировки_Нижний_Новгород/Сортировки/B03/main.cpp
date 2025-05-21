#include <iostream>
#include <algorithm>

using namespace std;

bool f(int x, int y) {return x>y;}

int main() {

    int n;
    cin >> n;

    int arr[n];
    int sum = 0;
    int sum_result = 0;
    int result = 0;

    for (int i=0; i<n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr+n, f);

    for (int j=0; j<n; ++j) {
        result += 1;
        sum_result += arr[j];
        sum -= arr[j];
        if (sum_result > sum) {break;}
    }

    cout << result;
}