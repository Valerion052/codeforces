#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    auto cmp = [](int x, int y){
        if (x%2==0 && y%2!=0) {return true;}
        if (x%2!=0 && y%2==0) {return false;}
        return x < y;
    };

    set<int, decltype(cmp)> s(cmp);
    for (int i=0; i<n; ++i) {int num; cin >> num;  s.insert(num);}

    for (int x: s) {cout << x << ' ';}
}