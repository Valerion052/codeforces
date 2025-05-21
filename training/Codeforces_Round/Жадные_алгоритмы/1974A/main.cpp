#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        int counter_big = m/2;
        if (m%2!=0) {++counter_big;}
        
        int couner_small = max(n - (15 * counter_big - 4*m), 0);
        
        int result = counter_big + couner_small/15;
        if (couner_small%15 != 0) {++result;} 

        cout << result << '\n';
    }
}