#include <iostream>

using namespace std;

bool check(int c, int n, int s) {

    int pos = n/2 - (n%2==0 ? 1 : 0);
    int count = n-pos-1;
    long long sum=(long long)c*count;
    return s-(c+sum)>=0;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n, s; cin >> n >> s;


        int l=1, r=s, ans=0;
        while (l<=r) {
            int c=(l+r)/2;
            if (check(c, n, s)) {ans=c; l=c+1;}
            else {r=c-1;}
        }
        cout << ans << "\n";
    }
}