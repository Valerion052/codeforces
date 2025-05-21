#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i=0; i<n; ++i) {cin>>arr[i];}
    
    int it_1=-1, it_2=-1;
    for (int j=0; j<n; ++j) {
        if (arr[j]!=arr[0]) {it_1=j;}
        if (arr[j]!=arr[n-1] && it_2==-1) {it_2=j;}
    }
    cout << max(it_1, n-1-it_2);
}