#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, m, c;
    cin >> n >> m >> c;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    multiset<int> window;
    int counter = 0;

    for (int j=0; j<n; ++j) {
        
        window.insert(arr[j]);

        if (window.size() > c) {
            window.erase(window.find(arr[j-c]));
        }
        
        if (*window.rbegin() <= m && window.size() == c) {++counter;}
    }

    cout << counter;

}

