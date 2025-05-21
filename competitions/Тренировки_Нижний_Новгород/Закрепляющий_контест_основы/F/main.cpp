#include <iostream>
#include <set>

using namespace std;

int main() {
    int n = 4;
    set<int> s;

    while (n--) {
        int x;
        cin >> x;
        s.insert(x);
    }

    cout << 4 - s.size();

}

