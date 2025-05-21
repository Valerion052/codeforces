#include <iostream>
#include <algorithm>
#include <set>

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
        multiset<int> arr;
        for (int i=0; i<n; ++i) {
            int num;
            cin >> num;
            arr.insert(num);
        }

        auto it = arr.begin();

        for (int i = 0; i < n; ++i) {
            if ((n - 2) % (*it) == 0) {
                int value_1 = *it;
                int value_2 = (n - 2) / (value_1);
                it = arr.erase(it);
                if (arr.find(value_2)!= arr.end()) {
                    cout << value_1 << ' ' << value_2 << '\n';
                    break;
                }
            } else {++it;}
        }
    }
}