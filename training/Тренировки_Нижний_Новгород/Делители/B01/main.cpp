#include <iostream>

using namespace std;

int d[3001];

void getD(int k) {
    for (int i=2; i<=k; ++i) {
        if (d[i] == 0) {
            for (int j=i; j<=k; j+=i) {
                ++d[j];
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    getD(n);
    int ans = 0;
    for (int i=2; i<=n; ++i) {
        if (d[i]==2) {++ans;}
    }

    cout << ans;
}