#include <iostream>
#include <algorithm>

using namespace std;

bool f(pair<int, int> x, pair<int, int> y) {return x.second>y.second;}

int main() {

    int n, m;
    cin >> n >> m;

    int result = 0;
    pair<int, int> arr[m];

    for (int i=0; i<m; ++i) {
        cin >> arr[i].first >>  arr[i].second;
    }

    sort(arr, arr+m, f);

    for (int j=0; j<m; ++j) {
        if (arr[j].first-n<0) {
            result += arr[j].first * arr[j].second;
            n -= arr[j].first;
        } else {
            result += n * arr[j].second;
            break;
        }
    }

    cout << result;
}