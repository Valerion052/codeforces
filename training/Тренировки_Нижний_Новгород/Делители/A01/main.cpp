#include <iostream>

using namespace std;

int getD(int n) {
    int ans = 0;
    for (int i=1; i<=n; ++i) {
        if (n%i==0) {++ans;}
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << getD(n);
}