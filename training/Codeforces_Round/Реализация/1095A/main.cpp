#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin >> n;
    string s; cin >> s;

    int arr[11] = {0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55};
    
    int it=0;
    while (arr[it]<n) {
        cout << s[arr[it]]; ++it;
    }
}