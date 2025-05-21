#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    vector<long long> arr(n);

    for (int i=0; i<n; ++i) {cin >> arr[i];}

    long long result = 0;
    auto it_start = arr.begin();

    while (it_start != arr.end()) {

        auto it_end = upper_bound(it_start, arr.end(), *it_start + d);
        --it_end;

        long long count_point = distance(it_start, it_end);

        if (count_point>1) {result += (count_point*(count_point-1))/2;}

        ++it_start;
    }

    cout << result;
}

