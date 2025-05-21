#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool check(vector<int> &arr_n, vector<int> &arr_m, long long c) {

    int it=0;
    bool flag=1;
    for (int x=0; x<arr_n.size() && it<arr_m.size(); ++x) {
        if (arr_n[x]>=arr_m[it]) {++it;}
        else {
            if (flag) {
                if (c>=(long long)arr_m[it]) {flag=0; ++it;}
            }
        }
    }
    if (it<arr_m.size() && !flag && c >= arr_m[it]) {++it;}

    return it==arr_m.size();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, l, r, x;
    cin >> n >> l >> r >> x;

    long long arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}


    int total = (1<<n);
    int mask=1;

    int ans=0;
    for (int j=0; j<total; ++j) {
        int count=0;
        long long sum=0;
        long long _min=1e18, _max=0;
        for (int x=0; x<n; ++x) {
            if ((j>>x)&mask) {
                ++count;
                _min=min(_min, arr[x]);
                _max=max(_max, arr[x]);
                sum+=arr[x];
            }
        }
        if (count>=2 && (sum>=l && sum<=r) && _max-_min>=x) {++ans;}
    }
    cout << ans;

}