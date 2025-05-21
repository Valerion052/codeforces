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

        long long sum_1=0, sum_2=0;
        int n_1=0, n_2=0;
        for (int i=1; i<=n; ++i) {
            long long num;
            cin >> num;
            if (i%2 == 0) {
                sum_2+=num;
                ++n_2;
            }
            else {
                sum_1+=num;
                ++n_1;
            }
        }

        bool flag = 1;
        if (sum_1%n_1!=0 || sum_2%n_2!=0) {flag=0;}

        if (sum_1/n_1==sum_2/n_2 && flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
}