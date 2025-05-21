#include <iostream>
#include <algorithm>

using namespace std;

bool f(pair<int, int> x, pair<int, int> y) {
    return x.second<y.second;
};

int main() {

    int N;
    cin >> N;

    pair<int, int> arr[N];

    for (int i=0; i<N; ++i) {
        arr[i].first = i+1;
        cin >> arr[i].second;
    }

    sort(arr, arr+N, f);

    for (int j=0; j<N; ++j) {
        cout << arr[j].first << ' ';
    }

}