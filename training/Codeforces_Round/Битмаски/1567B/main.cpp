#include <iostream>

using namespace std;


int xor_to_n(int n) {
    if (n%4==0) {return n;}
    else if (n%4==1) {return 1;}
    else if (n%4==2) {return n+1;}
    else {return 0;}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        
        int ans=a;
        int XOR=xor_to_n(a-1);
        if (XOR!=b) {
            if ((XOR^b)==a) {ans+=2;}
            else {++ans;}
        }
        cout << ans << "\n"; 
    }
}