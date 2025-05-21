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

        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        bool flag = true;

        for (int i=1; i<n; ++i) {
            if (abs(arr[i-1] - arr[i]) == 5) {continue;}
            else if (abs(arr[i-1] - arr[i]) == 7) {continue;}
            else {flag=false; break;}

        }

        if (flag) {cout << "YES";} else  {cout << "NO";}
        cout << '\n';



    }






}