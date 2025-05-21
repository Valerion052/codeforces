#include <iostream>
#include <algorithm>
#include <numeric>


using namespace std;


int main() {
    int n;
    cin >> n;

    int arr[n], sum_1[n], sum_2[n];
    for(int i=0; i<n; ++i) {cin >> arr[i];}

    partial_sum(arr, arr+n, sum_1);
    reverse(arr, arr+n);
    partial_sum(arr, arr+n, sum_2);
    reverse(sum_2, sum_2+n);

    int counter = count_if(sum_1, sum_1+n-1, [&](int x) mutable {
        static int index = 1;
        return x == sum_2[index++];
    });

    cout << counter;

}