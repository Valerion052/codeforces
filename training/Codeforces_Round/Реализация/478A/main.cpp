#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int ans = 0;
    for (int i=0; i<5; ++i) {
        int num;
        cin >> num;
        ans+=num;
    }

    if (ans%5==0 && ans!=0) {cout << ans/5;} else {cout << - 1;}
}