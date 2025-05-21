#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, counter;
        cin >> n >> m;

        int arr[n*m];
        
        for (int i=0; i<n; ++i) {
            for(int j=0; j<m; ++j) {
                cin >> arr[j*n+i];
            }
        }

        counter = n;
        int sum = 0;

        for (int a=0; a<n*m-1; ++a) {
            if ((counter-1) == a) {counter += n; continue;}
            for (int b=a+1; b<counter; ++b) {
                sum += abs(arr[a] - arr[b]);
            }
        }

        cout << sum << endl;

    }
}