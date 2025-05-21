#include <iostream>
#include <vector>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        vector<int> arr;
        for (int i=0; i<n; ++i) {if (s[i]=='*') {arr.push_back(i+1);}}

        int k=arr.size();
        int median = k/2;

        long long ans=0;
        for (int j=0; j<k; ++j) {
            ans+=abs(arr[median]-(median-j) - arr[j]);
        }
        cout << ans << "\n";
    }
}