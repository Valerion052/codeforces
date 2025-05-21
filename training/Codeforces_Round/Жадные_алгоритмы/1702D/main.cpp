#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int p;
        string w;
        cin >> w >> p;

        int size = w.size(), price = 0;
        pair <int, char> arr[size];

        for (int i=0; i<size; ++i) {
            arr[i].first = i;
            arr[i].second = w[i];
            price += w[i]-96;
            }
        
        sort(arr, arr+size, [](pair <int, char> x, pair <int, char> y) {return x.second > y.second;});

        for (int j=0; j<size; ++j) {

            if (price>p) {
                price -= arr[j].second - 96;
                arr[j].second = '*';
            }
        }

        sort(arr, arr+size, [](pair <int, char> x, pair <int, char> y) {return x.first < y.first;});

        for (int k=0; k<size; ++k) {
            if (arr[k].second != '*') {cout << w[arr[k].first];}
            }
        cout << endl;
    }
}