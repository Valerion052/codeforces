#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    if (arr[n-1]==15) {cout << "DOWN"; return 0;}
    if (arr[n-1]==0) {cout << "UP"; return 0;}
    if (n==1) {cout << -1; return 0;}
    if (arr[n-1]-arr[n-2]>0) {cout << "UP";} else {cout << "DOWN";}
}