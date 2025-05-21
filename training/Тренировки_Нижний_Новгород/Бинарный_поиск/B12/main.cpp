
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool f(vector<long long> arr, int t) {

    int counter = 0, lower_bound = arr.size(), upper_bound = arr.back();

    for (int i=0; i<arr.size(); ++i) {
        if (arr[i] <= arr[0]+t) {++counter;} else {lower_bound = i; break;}
    }
    for (int i=lower_bound; i<arr.size(); ++i) {
        if (arr[i] <= arr[lower_bound]+t) {++counter;} else {upper_bound = arr[i]; break;}
    }

    return upper_bound + t >= arr.back();
}

int main() {
    int n;
    cin >> n;

    vector<long long> arr(n);

    for (int i=0; i<n; ++i) {cin >> arr[i];}
    sort(arr.begin(), arr.end());
    auto last = unique(arr.begin(), arr.end());
    arr.erase(last, arr.end());

    int l = 0, r = arr.back() - arr.front();
    double ans = 0;

    while (l<=r && arr.size() > 3) {
        int c = (l+r)/2;
        if (f(arr, c)){r=c-1; ans = c/2.0;}
        else {l=c+1;}
    }

    int index_lower = 0;

    for (int i=0; i<arr.size(); ++i) {if (arr[i] > arr.front()+2*ans) {index_lower = i; break;}}

    printf("%.6f \n", ans);
    printf("%.6f", arr[0] + ans);
    printf(" %.6f", arr[index_lower] + ans);
    printf(" %.6f", arr[n-1] - ans);

}