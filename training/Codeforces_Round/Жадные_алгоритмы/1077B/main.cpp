#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    int ans=0;
    for (int i=1; i<n+1; ++i) {if (
        arr[i-1]==1 && arr[i+1]==1 && arr[i]==0) {
            ++ans;
            arr[i+1]=0;
        }
    }
    cout << ans;
}