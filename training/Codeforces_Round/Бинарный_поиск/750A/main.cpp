#include <iostream>

using namespace std;

int n, k;

bool cheak(int c) {
    int sum = 0;
    for (int i=1; i<c+1; ++i) {sum += i*5;}
    return 240 - k - sum >= 0;
}

int main() {
    cin >> n >> k;

    int l = 0, r = n, ans = 0;

    while (l<=r) {
        int c = (l+r)/2;

        if (cheak(c)) {l = c + 1; ans = c;}
        else {r = c - 1;}
    }

    cout << ans;

}