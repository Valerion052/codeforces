#include <iostream>
#include <map>

using namespace std;

const int N=27;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, k;
        string a, b;
        cin >> n >> k >> a >> b;

        int _a[N]{}, _b[N]{};
        for (int i=0; i<n; ++i) {++_a[a[i]-'a']; ++_b[b[i]-'a'];}

        int it_a = 0, it_b = 0;
        bool flag=1;

        while (it_a<N-1 && flag) {
            if (_a[it_a]>=_b[it_b]) {
                _a[it_a]-=_b[it_b]; ++it_b;
                if (_a[it_a]%k!=0) {flag=0;}
                else {_a[it_a+1]+=_a[it_a]; ++it_a;}
            }
            else {flag=0;}
        }
        if (flag) {cout << "Yes\n";} else {cout << "No\n";}
    }
}