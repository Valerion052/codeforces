#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        for (int i=0; i<n; ++i) {cin>>arr[i];}
        sort(arr, arr+n);

        long long ans=0;
        bool flag=1;
        for (int i=n-1; i>=0; --i) {
            if (flag) {
                if (arr[i]%2==0) {ans+=arr[i];}
            }
            else {
                if (arr[i]%2!=0) {ans-=arr[i];}
            }
            flag=!flag;
        }
        if (ans>0) {cout << "Alice\n";}
        else if (ans<0) {cout << "Bob\n";}
        else {cout << "Tie\n";}
    }
}