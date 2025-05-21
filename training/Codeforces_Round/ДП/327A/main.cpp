#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int arr[n];
    int sum=0;
    for (int i=0; i<n; ++i) {
        cin>>arr[i];
        sum+=arr[i];
        arr[i]=arr[i]==0 ? 1 : -1;
    }

    int cum=-1e9;
    int local_sum=0;

    for (int j = 0; j<n; j++){
        local_sum = max(arr[j], local_sum+arr[j]);
        cum = max(cum, local_sum);
    }

    if (cum<0) {cout << sum-1;}
    else {cout << sum+cum;}

}