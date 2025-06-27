#include <iostream>
#include <vector>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    bool d[1001]{};
    int arr[n];
    vector<int> ans;

    for (int i=0; i<n; ++i) {cin >> arr[i];}
    for (int i=n-1; i>=0; --i) {if (!d[arr[i]]) {ans.push_back(arr[i]);} d[arr[i]]=1;}
    
    cout << ans.size() << "\n";
    for (int i=ans.size()-1; i>=0; --i) {cout << ans[i] << ' ';}

}   