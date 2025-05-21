#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        pair<long long, long long> arr_n[n+1]{};
        long long local_max = 0;
        for (int i=1; i<=n; ++i) {
            int num;
            cin >> num;
            if (num > local_max) {local_max=num;}
            arr_n[i].first = local_max;
            arr_n[i].second = arr_n[i-1].second + num;
        }

        long long arr_q[q];
        for(int j=0; j<q; ++j) {cin >> arr_q[j];}

        for (int _q=0; _q<q; ++_q) {

            int l = 0, r = n, ans=n;

            while (l<=r) {
                long long c = (l+r)/2;
                if (arr_n[c].first <= arr_q[_q]) {l=c+1; ans=c;}
                else {r=c-1;}
            }
            cout << arr_n[ans].second << ' ';
        }

        cout << '\n';
    }
}