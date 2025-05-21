#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        long long maximum = 0, sum = 0;

        for (int i=0; i<n; ++i) {
            int num;
            cin >> num;
            sum += num;
            if (num>maximum) {maximum = num;}
        }

        long long result_sum;
        if (sum%x>0) {result_sum = sum/x+1;} else {result_sum = sum/x;}
        cout << max(result_sum, maximum) << '\n';
    }
}