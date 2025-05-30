#include <iostream>
#include <vector>


using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int max = 0, min = 1001;

        for (int i=0; i<n; ++i) {
            int num;
            cin >> num;
            if (num > max) {max = num;}
            if (num < min) {min = num;}
        }
        int result = (n-1) * (max-min);
        cout << result << '\n'; 
    }

}