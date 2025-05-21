#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    int c = 0;
    int p = 1;
    set<int> dict;
    dict.insert(1);
    while (c<10001) {
        c+=8;
        p+=c;
        dict.insert(p);
    }

    // for (auto x: dict) { cout << x << ' ';}

    while (t--) {
        int n;
        cin >> n;

        int arr[n+1]{};
        int counter = 0;
        for (int i=1; i<=n; ++i) {
            int num;
            cin >> num;
            arr[i] = arr[i-1]+num;
            // cout << arr[i] << ' ';
            if (dict.count(arr[i])) {++counter;}
        }
    cout << counter << '\n';
    }
}