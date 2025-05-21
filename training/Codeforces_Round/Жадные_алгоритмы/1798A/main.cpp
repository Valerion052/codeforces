#include <iostream>

using namespace std;

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        int arr_a[n], arr_b[n];

        for (int i=0; i<n; ++i) {cin >> arr_a[i];}
        
        for (int j=0; j<n; ++j) {cin >> arr_b[j];}
        
        for (int k=0; k<n; ++k) {
            int a = arr_a[k], b=arr_b[k];
            if (a < b) {
                arr_a[k] = b;
                arr_b[k] = a;
                }
            }

        int max_a=0, max_b=0;

        for (int i=0; i<n; ++i) {
            if(arr_a[i]>max_a) {max_a=arr_a[i];}
            if(arr_b[i]>max_b) {max_b=arr_b[i];}
            }
        
        bool flag=false;

        if (
            arr_a[n-1] == max_a
            &&
            arr_b[n-1] == max_b
            ) {flag=true;}

        if(flag) {cout << "YES";} else {cout << "NO";}
        cout << '\n';
    }
}