#include <iostream>
#include <vector>

using namespace std;

const int N=30;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        
        vector<int> arr(n);
        int _max=0;
        for (int i=0; i<n; ++i) {cin >> arr[i]; _max=max(_max, arr[i]);}

        int d[N]{};
        for (int i=0; i<N; ++i) {
            for (int j=0; j<n; ++j) {d[i]+=(arr[j]>>i)&1;}
        }

        long long ans=0;
        for (int i=0; i<n; ++i) {
            long long local_ans=0;
            for (int j=0; j<N; ++j) {
                if ((arr[i]>>j)&1) {local_ans+=(long long)(n-d[j])*(1ll<<j);}
                else {local_ans+=(long long)d[j]*(1ll<<j);}
            }
            ans=max(ans, local_ans);
        }
        cout << ans << "\n";
    }
}