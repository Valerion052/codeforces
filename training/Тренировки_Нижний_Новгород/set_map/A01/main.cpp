#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> s;
    for (int i=0; i<n; ++i) {int num; cin >> num; s.insert(num);}
    for (int x: s) {cout << x << ' ';}


}