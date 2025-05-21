#include <iostream>
#include <cmath>

using namespace std;

bool check(int k) {
    for (int i=2; i*i<=k; ++i) {
        if (k%i==0) {return 0;}
    }
    return 1;
}


int main() {
    int n;
    cin >> n;

    for (int i=0; i<n; ++i) {
        long long x;
        cin >> x;
        
        int value = sqrt(x);
            
        if ((long long)value*value==x && x!=1) {
            if (check(value)) {cout << "YES" << '\n'; continue;}
        }
        cout << "NO" << '\n';
    }
}
