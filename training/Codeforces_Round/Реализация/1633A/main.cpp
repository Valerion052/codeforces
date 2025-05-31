#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        
        for (int i=0; i<10; ++i) {
            int x = n/10*10+i;
            if (n%7==0) {cout << n << "\n"; break;}
            if (x%7==0) {cout << x << "\n"; break;}
        }
    }
}