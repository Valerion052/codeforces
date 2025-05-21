#include <iostream>
#include <set>

using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {

        // ios::sync_with_stdio(0);
        // cin.tie(0);
        // cout.tie(0);
        
        int n;
        cin >> n;

        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        int result = 0;

        if (n==2) {result=min(arr[0], arr[1]);}
        else {
            for (int j=0; j<n-2; ++j) {
                multiset<int> filter;
                for (int k=j; k<=j+2; ++k) {filter.insert(arr[k]);}
                auto it = filter.begin();
                ++it;
                result = max(result, *it); 
            }
        }

        cout << result << '\n';
    }
}