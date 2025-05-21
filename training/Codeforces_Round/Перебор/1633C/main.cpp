#include <iostream>
#include <vector>

using namespace std;

bool check(long long Hc, long long Dc, long long Hm, long long Dm) {
    long long k = Hm%Dc==0 ? Hm/Dc : Hm/Dc+1;
    long long m = Hc%Dm==0 ? Hc/Dm : Hc/Dm+1;
    return k<=m;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        long long Hc, Dc, Hm, Dm, k, w, a;
        cin >> Hc >> Dc >> Hm >> Dm >> k >> w >> a;

        bool flag = 0;
        for (int i=k; i>=0 && !flag; --i) {
            long long _w = i*w;
            long long _a = (k-i)*a;
            flag = check(Hc+_a, Dc+_w, Hm, Dm);
        }
        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
    
}