#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    long long arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    long long dp_1[n]{}, dp_2[n]{};
    for (int j=1; j<n; ++j) {
        dp_1[j]=dp_1[j-1] - min(arr[j]-arr[j-1], 0ll);
        dp_2[n-j-1]=dp_2[n-j] - min(arr[n-j-1]-arr[n-j], 0ll);
    }

    while (m--) {
        int s, t;
        cin >> s >> t;
        --s, --t;

        if (s<t) {cout << dp_1[t]-dp_1[s];}
        else {cout << dp_2[t]-dp_2[s];}
        cout << "\n";
    }

}