#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    auto cmp = [](int x, int y){return x>y;};
    map<int, int, decltype(cmp)> window(cmp);

    for (int j=0; j<n; ++j) {

        if (window.find(arr[j]) == window.end()) {window[arr[j]] = 1;}
        else {++window[arr[j]];}
        
        if (j >= k-1) {
            if (j > k-1) {
                --window[arr[j-k]];
                if (window[arr[j-k]] == 0) {window.erase(arr[j-k]);}
            }
            
            bool flag = true;
            for (auto x: window) {if (x.second==1) {cout << x.first; flag = false; break;}}
            if (flag) {cout << "Nothing";}
            cout << '\n';
            }
    }
}