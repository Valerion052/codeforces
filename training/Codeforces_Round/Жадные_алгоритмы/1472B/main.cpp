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
        cin >> n;

        int arr[3]{};
        bool flag=false;

        for (int i=0; i<n; ++i) {
            int num;
            cin >> num;
            ++arr[num];
        }

        if (arr[2]%2==0) {
            if (arr[1]%2==0) {flag=true;}
        }
        else {
            if (arr[1]>=2 && arr[1]%2==0) {flag=true;}
        }

        if (flag) {cout << "YES\n";} else {cout << "NO\n";}

    }
}