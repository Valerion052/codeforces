#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n, a, b;
    cin >> n >> a >> b;

    vector<int> arr(n);
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    sort(arr.begin(), arr.end());

    int lower = arr[b-1];
    auto upper = upper_bound(arr.begin(), arr.end(), lower);
    
    if (distance(upper, arr.end())<a) {cout << 0;}
    else {cout << *upper - lower;}


}