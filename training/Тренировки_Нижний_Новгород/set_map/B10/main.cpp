#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    string arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    set<string> name;

    for (int j=n-1; j>=0; --j) {
        
        if (name.find(arr[j]) == name.end()) {
            cout << arr[j] << '\n';
            name.insert(arr[j]);
        }
    }
}