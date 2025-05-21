#include <iostream>

using namespace std;

int value(int x, int d) {
    int v = d/(x+1);
    if (d%(x+1)!=0) {++v;}
    return x+v;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n, d;
        cin >> n >> d;

        int l=0, r=n, ans=0;

        while (l<=r) {
            int c=(l+r)/2;

            if (value(c, d)<=n) {l=c+1; ans=c;}
            else {r=c-1;}
        }

        if (value(ans, d)<=n) {cout << "YES\n";} else {cout << "NO\n";}
    }

    
}