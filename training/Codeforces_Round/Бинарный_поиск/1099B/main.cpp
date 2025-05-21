#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int l=1, r=1e5, ans=0;
    while (l<=r) {
        int c=(l+r)/2;
        if ((long long)c*c<=n) {l=c+1; ans=c;}
        else {r=c-1;}
    }
    int plus = (n-ans*ans)/ans + ((n-ans*ans)%ans!=0 ? 1: 0);
    cout << ans*2 + plus;
}