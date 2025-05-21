#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool f(pair<string, int> x, pair<string, int> y) {
    if (x.second == y.second) {return x.first < y.first;}
    return x.second > y.second;
};

int main() {

    int N;
    cin >> N;

    pair<string, int> arr[N];

    for (int i=0; i<N; ++i) {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr, arr+N, f);

    for (int j=0; j<N; ++j) {
        cout << arr[j].first << ' ';
    }

}