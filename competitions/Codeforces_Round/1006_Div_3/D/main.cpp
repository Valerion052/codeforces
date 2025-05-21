#include <iostream>
#include <map>

using namespace std;

int find_count(map<int, int> &d, int x) {
    int ans = 0;
    for (auto [k, v]: d) {if (x<k) {ans+=v;}}
    return ans;
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

        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        map<int, int> d;

        int ans = 0;
        int l = 0, r = 0;
        for (int j=0; j<n; ++j) {
            ++d[arr[j]];
            int counter = find_count(d, arr[j]);
            for (int k=j+1; k<n; ++k) {
                if (arr[k]<arr[j]) {--counter;}
                else if (arr[k]>arr[j]) {++counter;}
                
                if (ans>counter) {
                    ans = counter;
                    l=j;
                    r=k;
                }
            }
        }

        cout << l+1 << ' ' << r+1 << "\n";

    }
}