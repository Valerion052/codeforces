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

    int count = 1;
    int local_count = 1;

    for (int j=1; j<n; ++j) {
        if (arr[j]>=arr[j-1]) {++local_count;}
        else {local_count=1;}
        count=max(count, local_count);
    }

    cout << count;

    // for (int i=0; i<=n; ++i) {cout << arr[i] << ' ';}

    
}