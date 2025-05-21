#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n]; for (int i=0; i<n; ++i) {cin >> arr[i];}

    int total = 1<<n;
    int mask=1;

    for (int i=0; i<total; ++i) {
        int v=0;
        for (int j=0; j<n; ++j) {
            if ((i>>j)&mask) {v+=arr[j];}
            else {v-=arr[j];}
        }
        if (abs(v)%360==0) {cout << "YES"; return 0;}
    }
    cout << "NO";

    
}