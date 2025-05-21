#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int k;
    string n;
    cin >> k >> n;

    int arr[10]{};
    int sum_n = 0, result = 0;

    for (int i=0; i<n.size(); ++i) {
        sum_n += n[i] - '0';
        ++arr[9 - (n[i] - '0')];
    }
    
    // for (int j=9; j>=0; --j) {
    //     if (k < sum_n) {break;}
    //     for (int a=1; a<arr[j]+1; ++a) {
    //         if (k > sum_n) {
    //             sum_n += j;
    //             ++result;
    //         }
    //     }
    // }

    for (int j = 9; j >= 0 && sum_n < k; --j) {
        while (arr[j] > 0 && sum_n < k) {
            sum_n += j;
            ++result;
            --arr[j];
        }
    }

    cout << result;

}
