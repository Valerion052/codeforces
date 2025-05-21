#include <iostream>
#include <numeric>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr_1[n], arr_2[n-1], arr_3[n-2];
    
    for (int i=0; i<n; ++i) {cin >> arr_1[i];}
    for (int j=0; j<n-1; ++j) {cin >> arr_2[j];}
    for (int k=0; k<n-2; ++k) {cin >> arr_3[k];}

    long long accum_1 = accumulate(arr_1, arr_1+n, 0LL);
    long long accum_2 = accumulate(arr_2, arr_2+n-1, 0LL);
    long long accum_3 = accumulate(arr_3, arr_3+n-2, 0LL);

    cout << accum_1 - accum_2 << '\n';
    cout << accum_2 - accum_3;
}