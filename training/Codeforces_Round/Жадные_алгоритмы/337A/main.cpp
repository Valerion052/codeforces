#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr(m);

    for(int i=0; i<m; ++i) {cin >> arr[i];}
    sort(arr.begin(), arr.end());

    int result = arr[n-1] - arr[0];

    for (int j=0; j<m-n+1; ++j) {
        if ((arr[j+n-1] - arr[j]) < result) {result = (arr[j+n-1] - arr[j]);}
    }

    cout << result;

}