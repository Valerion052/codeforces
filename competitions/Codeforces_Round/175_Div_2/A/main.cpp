#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        if (n>=3) {
            if (n%15==0) {
                cout << (n/15)*3+1;
            }
            else if (n%15==1) {
                cout << (n/15)*3+2;
            }
            else {cout << (n/15)*3+3;}
        }
        else {cout << n+1;}
        cout << "\n";
        
        
    }
    
}