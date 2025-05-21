#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    pair<int, int> arr[n];

    for (int i=0; i<n; ++i) {
        cin >> arr[i].first >> arr[i].second;
        if (arr[i].second < arr[i].first) {swap(arr[i].first, arr[i].second);}
    }

    sort(arr, arr+n, [](pair<int, int> x, pair<int, int> y) {return x.second < y.second;});

    
    int last = -10001;
    int counter = 0;
    int list[1000]{};
    
    for (int j=0; j<n; ++j) {
        if (arr[j].first <= last) {continue;}

        last = arr[j].second;
        list[counter] = last;
        ++counter;
    }

    cout << counter << endl;
    for (int k=0; k<counter; ++k) {cout << list[k] << ' ';}

}