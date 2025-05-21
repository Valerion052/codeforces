#include <iostream>
#include <vector>

using namespace std;

int n, k; 

int check(vector<int> &arr, long long c) {
    int l=0, r=n-1, ans=0;
    while (l<r) {
        if (arr[l]+arr[r]<=c) {++ans; ++l; --r;}
        else {
            if (arr[r]>c) {return 0;}
            ++ans; --r;
        }
    }
    if (l==r) {++ans; if (arr[l]>c) {return 0;}}
    return ans<=k;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;
    vector<int> arr(n);
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    long long l=1, r=1e12, ans=0;
    while(l<=r) {
        long long c = (l+r)/2;
        if (check(arr, c)) {r=c-1; ans=c;}
        else {l=c+1;}
    }
    cout << ans;
}