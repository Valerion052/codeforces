#include <iostream>
#include <bitset>

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

        bitset<51> d;
        int arr[2*n];
        for (int i=0; i<2*n; ++i) {
            int num;
            cin >> num;
            if (!d[num]) {cout << num << ' ';}
            d[num]=1;
        }
        cout << '\n';
    }
}