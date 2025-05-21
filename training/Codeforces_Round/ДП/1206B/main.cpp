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

    vector<int> arr_1, arr_2;
    for (int i=0; i<n; ++i) {
        int num;
        cin >> num;
        if (num<0) {arr_1.push_back(num);}
        else {arr_2.push_back(num);}
    }

    long long ans = 0;
    if (arr_1.size()%2!=0 && arr_2.empty()) {
        auto _min_1 = min_element(arr_1.begin(), arr_1.end());
        ans = abs(*_min_1-1);
        arr_1.erase(_min_1);
    }
    else if (arr_1.size()%2!=0) {
        auto _min_2 = min_element(arr_2.begin(), arr_2.end());
        arr_1.push_back(*_min_2);
        arr_2.erase(_min_2);
    }

    
    for (auto x: arr_1) {ans= ans + abs(x+1);}
    for (auto y: arr_2) {ans=ans + abs(y-1);}

    cout << ans;
}