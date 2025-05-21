#include <iostream>
#include <bitset>

using namespace std;


bool check (long long k) {
    for (long long i=2; (long long)i*i<=k; ++i) {
        if (k%i==0) {return 0;}
    }
    return 1;
}

int main () {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (int i=0; i<n; ++i) {
        long long x;
        cin >> x;

        if (x<=1) {cout << "no" << '\n'; continue;}

        if (check(x)) {cout << "yes";}
        else {cout << "no";}
        cout << '\n';
    }

}



