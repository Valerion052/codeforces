#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int arr[n];
    bool flag=1;
    for (int i=0; i<n; ++i) {
        int num; cin >> num;
        arr[i]=num;
        if (i>0 && flag) {if (num<=arr[i-1]) {flag=0;}}
    }

    if (flag) {cout << n; return 0;}

    int dp_1[n]{}, dp_2[n]{};
    int up=0, down=0;
    int ans=0;
    for (int i=1; i<n; ++i) {
        ++up; ++down;
        dp_1[i]=up; dp_2[n-i-1]=down;
        if (arr[i]<=arr[i-1]) {up=0;}
        if (arr[n-i-1]>=arr[n-i]) {down=0;}
        ans=max(ans, dp_1[i]); ans=max(ans, dp_2[n-i-1]);
    }
    for (int i=1; i<n-1; ++i) {
        int value = dp_1[i];
        if (arr[i-1]<arr[i+1]) {value+=dp_2[i];}
        ans=max(ans, value);
    }
    cout << ans;

}