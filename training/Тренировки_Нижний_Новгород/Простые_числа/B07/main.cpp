#include <iostream>

using namespace std;

bool check(int k) {
    for (long long i=2; (long long)i*i<=k; ++i) {
        if (k%i==0) {return 0;}
    }
    return 1;
}


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int result = 0;

        if (n>7 && n!=9) {
            if (n%2==0) {result = n/4;}
            else {
                if (check(n-9)) {--result;}
                else {result = (n-9)/4+1;}
            }
        }
        else if (n == 4 || n==6 || n==9) {++result;}
        else {--result;}

        cout << result << '\n';
    }
}