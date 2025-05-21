#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> vec(n);

    for (int i=0; i<n; ++i) {cin >> vec[i];}

    for (int j=0; j<n; ++j) {
        if (j == 0) {cout << vec[j];}
        else { cout << vec[j] - vec[j-1];}
        cout << ' ';
    }

}