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
        int n, k;
        string s;
        cin >> n >> k >> s;
        vector<int> arr;

        for (int i=0; i<n; ++i) {if (s[i]=='*') {arr.push_back(i+1);}}

        if (arr.size()<=2) {cout << arr.size();}
        else {
            if (arr.back()-arr.front()<=k) {cout << 2;}
            else {
                int ans = 2;
                int step = 0;
                for (int j=1; j<arr.size(); ++j) {
                    step+=arr[j]-arr[j-1];
                    if (step>k) {
                        ++ans;
                        step=arr[j]-arr[j-1];
                    }
                }
            cout << ans;
            }
        }
        cout << '\n';
    }
}