#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        vector<int> dict;
        long long value = 1;
        while (value<=r2) {
            dict.push_back(value);
            value*=k;
        }

        int counter = 0;
        for (auto x: dict) {
            // if ((long long)r1*x<l2) {continue;}  Это можно использовать вместо проверки max
            // if ((long long)l1*x>r2) {continue;}  в строке counter += max(row_1 - row_2+1, 0);
            //                                      И просто брать в ней counter +=row_1 - row_2+1;
            
            int row_1 = min(r2/x, r1);
            int row_2 = max(l2%x==0 ? l2/x : l2/x+1, l1);
            counter += max(row_1 - row_2+1, 0);
        }

        cout << counter << '\n';
    }
}