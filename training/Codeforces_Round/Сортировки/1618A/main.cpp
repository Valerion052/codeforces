#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;

    while (t--) {
        int arr[7];
        for (int i=0; i<7; ++i) {cin >> arr[i];}

        cout << arr[0] << ' ' << arr[1] << ' ';
        if (arr[0]+arr[1]==arr[2]) {cout << arr[3];} else {cout << arr[2];}
        cout << '\n';
    }
}