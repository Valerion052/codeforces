#include <iostream>
#include <cmath>

using namespace std;


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long a, b;
    cin >> a >> b;

    long long S = a+b;
    long long k = sqrt(S)+1;
    long long P = __LONG_LONG_MAX__;
    
    for (int i=1; i<=k; ++i) {
        if (S%i==0) {
            long long row_1 = S/i;
            if (a%i==0) {
                long long row_2 = a/i;
                if (row_2<=row_1) {
                    P = min(P, 2*(row_1+row_2));
                }
            }
            else if (a%row_1==0) {
                long long row_2 = a/row_1;
                if (row_2<=row_1) {
                    P = min(P, 2*(row_1+row_2));
                }
            }
        }
    }

    cout << P;
}