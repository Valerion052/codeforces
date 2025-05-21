#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int arr[n*m];
        int sum = 0;
        
        for (int i=0; i<n; ++i) {
            for(int j=0; j<m; ++j) {
                cin >> arr[i*m+j];
            }
        }
        
        for (int a=0; a<n-1; ++a) {
            for(int b=0; b<m; ++b) {
                for(int c=a+1; c<n; ++c) {
                    sum += abs(arr[b+m*a] - arr[b+m*c]);
                }
            }
        }

        cout << sum << endl;
    }
}