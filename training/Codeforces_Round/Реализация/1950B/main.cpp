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

        bool flag;
        for (int i=0; i<n; ++i) {
            flag = i%2==0 ? 1:0;
            for (int j=0; j<n; ++j) {
                if (flag) {cout << "##"; flag=!flag;}
                else {cout << ".."; flag=!flag;}
            }
            cout << "\n";
            bool flag = i%2==0 ? 1:0;
            for (int j=0; j<n; ++j) {
                if (flag) {cout << "##"; flag=!flag;}
                else {cout << ".."; flag=!flag;}
            }
            cout << "\n";
        }
    }

}