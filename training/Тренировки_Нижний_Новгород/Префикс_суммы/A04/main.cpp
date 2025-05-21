#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    long long arr[n], sum=0;

    for (int i=0; i<n; ++i) {
        long long num;
        cin >> num;
        sum += num;
        arr[i] = sum;
    }

    long long value_gap = 0, result = -1000000000;

    for (int j=0; j<n; ++j) {
        result = max(arr[j]-value_gap, result);
        value_gap = min(arr[j], value_gap);
    }
    cout << result;
}