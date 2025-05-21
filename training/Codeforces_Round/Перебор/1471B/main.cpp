#include <iostream>
#include <vector>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<pair<int, int>> arr;
        long long ans=0;
        for (int i=0; i<n; ++i) {
            int num; cin >> num;
            arr.push_back({num, 1});
            ans+=num;
        }
        
        for (int j=0; j<arr.size(); ++j) {
            if (arr[j].first%x==0) {
                arr.push_back({arr[j].first/x, x*arr[j].second});
                ans+=arr[j].second * (long long)arr[j].first;
            }
            else {break;}
        }
        cout << ans << "\n";
    }
    
}