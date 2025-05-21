#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[21] {};
        for (int i=0; i<n; ++i) {
            int num;
            cin >> num;
            ++arr[num];
        }

        int result = 0;

        for (int j=1; j<21; ++j) {result += arr[j]/2;}

        cout << result << '\n';
    } 

}