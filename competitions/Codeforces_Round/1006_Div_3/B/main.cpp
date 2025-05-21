#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        long long count_1 = 0, count_2=0;
        for (int i=0; i<n; ++i) {
            if (s[i]=='-') {++count_1;}
            else {++count_2;}
        }

        long long count_1_1 = count_1/2;
        long long count_1_2 = count_1/2 + (count_1%2==0 ? 0 : 1);

        cout << count_1_1 * count_1_2 * count_2 << "\n";
    }
}