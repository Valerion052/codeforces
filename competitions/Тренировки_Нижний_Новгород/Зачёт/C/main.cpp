#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> arr;
    long long value = 1;
    long long it = 2;
    while (value<=1e9) {
        value = it*(it-1)*(it-1);
        arr.push_back(value);
        ++it;
    }

    // for (auto x: arr) {cout << x << ' ';}

    auto index = lower_bound(arr.begin(), arr.end(), n);

    cout << distance(arr.begin(), index)+2;


}