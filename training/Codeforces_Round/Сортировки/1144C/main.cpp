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

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}
    sort(arr, arr+n);

    vector<int> ans_1, ans_2;
    bool flag = 1;
    ans_1.push_back(arr[0]);

    for (int j=1; j<n && flag; ++j) {
        if (arr[j-1]==arr[j]) {
            if (!ans_2.empty()) {
                if (arr[j]!=ans_2.back()) {
                    ans_2.push_back(arr[j]);
                }
                else {flag=0;}
            }
            else {ans_2.push_back(arr[j]);}
        }
        else {ans_1.push_back(arr[j]);}
    }

    reverse(ans_2.begin(), ans_2.end());

    if (!flag) {cout << "NO\n";}
    else {
        cout << "YES\n" << ans_1.size() << "\n";
        for (auto x: ans_1) {cout << x << ' ';}
        cout << "\n" << ans_2.size() << "\n";
        for (auto x: ans_2) {cout << x << ' ';}
    }




}