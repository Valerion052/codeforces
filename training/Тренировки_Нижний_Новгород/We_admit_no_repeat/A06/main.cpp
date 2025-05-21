#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    vector<int> arr;
    int num;
    while (cin >> num) {arr.push_back(num);}
    auto bounder = unique(arr.begin(), arr.end());
    cout << count(arr.begin(), bounder, 1) << ' ' << count(arr.begin(), bounder, 0);
}

