#include <iostream>
 
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
 
    while (t--) {
 
        long n, k;
        cin >> n >> k;
 
        long difference = n;
        long count = 0;
        long power = 1;
        long result = 0;
 
        if (k==1 || k > n) {
            cout << n << endl;
            continue;
        }

        while (difference>0) {
            if ((difference-k*power) >= 0) {
                power *= k;
            } else {
                difference = difference-power;
                power = 1;
                result += 1;
            }
            
        }
        cout << result << endl;    
    }

}