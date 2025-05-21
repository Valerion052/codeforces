#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> s;
    for (int i=1; i<=n+1; ++i) {s.insert(i);}
    for (int j=0; j<n; ++j) {int num; cin >> num; s.erase(num);}

    cout << *s.begin();

}