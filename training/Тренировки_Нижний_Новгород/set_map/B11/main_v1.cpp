#include <iostream>
#include <set>
#include <map>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, m;
    cin >> n >> m;

    int arr[n];
    set<int> unique;
    map<int, int> counter, result;

    for (int i=0; i<n; ++i) {
        cin >> arr[i];
        unique.insert(arr[i]);
        if (counter.find(arr[i]) == counter.end()) {counter[arr[i]] = 1;}
        else {++counter[arr[i]];}
    }

    for (int j=0; j<n; ++j) {
        result[j+1] = unique.size();
        --counter[arr[j]];
        if (counter[arr[j]]==0) {unique.erase(unique.find(arr[j]));}
    }

    for (int k=0; k<m; ++k) {
        int x;
        cin >> x;
        cout << result[x] << '\n';
    }


}