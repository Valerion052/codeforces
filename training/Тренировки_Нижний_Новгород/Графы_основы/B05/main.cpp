#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n+1];
    arr[1]=1;
    int colors[n+1]{};

    for (int i=2; i<=n; ++i) {cin>>arr[i];}

    int ans = 0;
    for (int j=1; j<=n; ++j) {
        int c;
        cin >> c;
        
        if (colors[arr[j]]!=c) {++ans;}
        colors[j]=c;
    }
    cout << ans;
}