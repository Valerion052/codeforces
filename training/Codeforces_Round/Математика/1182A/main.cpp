#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int counter = n%2==0 ? n/2 : 0;
    int ans = counter!=0 ? 1 : 0;

    while(counter--) {ans*=2;}
    
    cout << ans;
}