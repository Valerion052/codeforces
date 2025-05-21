#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}
    for (int j=0; j<n; ++j) {int num; cin >> num; arr[j]-=num;}
    sort(arr, arr+n);

    long long ans=0;
    for (int k=0; k<n; ++k) {
        if (arr[k]>0) {
            int value=-(arr[k]-1);
            int* index = lower_bound(arr, arr+k+1, value);
            ans+=k-distance(arr, index);
        }
    }
    cout << ans;

}