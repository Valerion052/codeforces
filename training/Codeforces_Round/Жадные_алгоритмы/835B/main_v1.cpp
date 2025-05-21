#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int k;
    string n;
    cin >> k >> n;

    sort(n.begin(), n.end());

    int sum_n = 0, result = 0;

    for (int i=0; i<n.size(); ++i) {
        sum_n += n[i] - '0';
    }
    
    for (int j=0; j<n.size(); ++j) {
        if (k > sum_n) {
            sum_n += 9 - (n[j] - '0');
            ++result;
        }
    }

    cout << result;

}