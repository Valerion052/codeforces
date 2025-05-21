#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        int counter = 0;
        int local_counter = 0;

        for (int j=0; j<n-1; ++j) {
            if (arr[k-1] > arr[j+1]) {++local_counter;}
            else if (arr[k-1] < arr[j+1]) {
                counter=max(counter, local_counter);
                local_counter=1;
            }
        }




        // cout << (*(bound+1)).second-(*(bound)).second;

        // for (int i=0; i<n; ++i) {cout << p[i].first << ' ';}

        
    }
}