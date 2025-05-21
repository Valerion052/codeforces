#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n];
    
    for (int j=0; j<n; ++j) {cin >> arr[j];}

    for (int i=0; i<m; ++i) {
        bool flag = false;
        int l = 0, r = n-1, num;
        cin >> num;

        while (l<=r) {
            int c = (l+r)/2;
            if (arr[c] == num) {
                flag = true;
                break;
            }
            
            if (arr[c] > num) {r = c - 1;}
            else {l = c + 1;}
        }

        if (flag) {cout << "Yes";} else {cout << "No";}
        cout << endl;
    }
}