#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    set<int> dict;

    for (int i=0; i<n; ++i) {
        int num;
        cin >> num;
        if (num!=0) {dict.insert(num);}
    }

    if (dict.empty()) {cout << 1;} else {cout << dict.size();}

}