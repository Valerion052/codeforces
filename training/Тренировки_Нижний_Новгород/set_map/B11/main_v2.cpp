#include <iostream>
#include <set>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, m;
    cin >> n >> m;

    int arr[n+1]{}, result[n+1]{};
    set<int> unique;

    for (int i=1; i<=n; ++i) {cin >> arr[i];}

    for (int j=n; j>0; --j) {
        unique.insert(arr[j]);
        result[j] = unique.size();
    }


    for (int k=0; k<m; ++k) {
        int x;
        cin >> x;
        cout << result[x] << '\n';
    }


}