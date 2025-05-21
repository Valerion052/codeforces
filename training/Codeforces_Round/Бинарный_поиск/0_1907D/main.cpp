#include <iostream>

using namespace std;

bool bound(pair<int, int> p, int k) {
    return k>=p.first && k<=p.second;
}

bool check2(pair<int, int> p[], int n, int k) {

    int step = 0;
    for (int i=0; i<n; ++i) {
        if (bound(p[i], step)) {continue;}
        else {
            if (step<p[i].first) {step+=k;}
            else {step-=k;}
            
            if (step<=p.first)
        }
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        pair<int, int> arr[n];
        int _max = 0;
        for (int i=0; i<n; ++i) {
            int x, y;
            cin >> x >> y;

            if (y>_max) {_max=y;}
            arr[i].first = x;
            arr[i].second = y;
        }

        // for (int i=0; i<n; ++i) {
        //     cout << arr[i].first << ' ' << arr[i].second << '\n';
        // }


        int l=0, r=_max, ans=0;
        while (l<=r) {
            int c = (l+r)/2;
            cout << c << '\n';
            if (check2(arr, n, c)) {r=c-1; ans=c;}
            else {l=c+1;}
        }
        cout << ans << '\n';
    }
}