#include <iostream>

using namespace std;


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;

        int max_value = max(a, b), min_value = min(a, b);
        
        if (2*min_value >= max_value) {cout << 4*min_value*min_value;}
        else {cout << max_value*max_value;}

        cout << '\n';
        }
    }