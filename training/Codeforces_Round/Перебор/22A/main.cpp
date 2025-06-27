#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    set<int> d;
    for (int i=0; i<n; ++i) {
        int num; cin >> num; d.insert(num);
    }

    auto it=d.begin(); ++it;
    if (it==d.end()) {cout << "NO";}
    else {cout << *it;}

    
}