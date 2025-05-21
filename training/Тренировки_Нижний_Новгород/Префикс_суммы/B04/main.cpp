#include <iostream>

using namespace std;

int n;

bool check(long long sum_pre[], long long sum_suf[], int k) {
    long long value = sum_pre[k];

    int l=0, r=n-k, ans=0;
    
    while (l<=r) {
        int c = (l+r)/2;
        if (sum_suf[c] >= value) {r=c-1; ans = c;}
        else {l=c+1;}
    }
    return sum_suf[ans] == value;
}

int main() {
    cin >> n;

    long long arr[n]{};
    for (int i=0; i<n; ++i) {cin>> arr[i];}


    long long arr_pre[n+1]{}, arr_suf[n+1]{};
    for (int j=0; j<n; ++j) {
        arr_pre[j+1] = arr_pre[j] + arr[j];
        arr_suf[j+1] = arr_suf[j] + arr[n-1-j];
        }

    for (int k = n-1; k >=0; --k) {
        if (check(arr_pre, arr_suf, k)) {cout << arr_pre[k]; return 0;}
    }
}