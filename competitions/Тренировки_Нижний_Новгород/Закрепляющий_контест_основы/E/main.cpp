#include <iostream>
#include <algorithm>

using namespace std;

int n;

bool cheak(int k, int arr[]) {
    for (int i=0; i<k; ++i) {
        if (arr[i]*2 > arr[n-k+i]) {return 0;}
    }
    return 1;
}


int main() {
    cin >> n;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}
    sort(arr, arr+n);


    int l=0, r=n/2, ans=0;
    while (l<=r) {
        int c = (l+r)/2;
        if (cheak(c, arr)) {l = c+1; ans = c;}
        else {r = c-1;}
    }

    cout << n-ans;
}