#include <iostream>
#include <algorithm>

using namespace std;

bool check(int sum, int k) {
    if (9*k<=sum) {return 1;}
    return 0;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    
    while (t--) {

        int a, b, c;
        int arr[3];
        for (int i=0; i<3; ++i) {cin >> arr[i];}

        int sum = arr[0]+arr[1]+arr[2];
        int min = *min_element(arr, arr+3);

        int l=0, r=sum/7, ans=0;
        while (l<=r) {
            int c=(l+r)/2;
            if (check(sum, c)) {l=c+1; ans = c;}
            else {r=c-1;}
        }

        // cout << ans;

        if (sum-ans*9==0 && min-ans>=0) {cout << "YES\n";}
        else {cout << "NO\n";}
    }
}