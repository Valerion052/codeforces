#include <iostream>
#include <set>

using namespace std;

int f(int x) {
    ++x;
    while (x%10==0) {x/=10;}
    return x;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    set<int> ans;
    while (!ans.count(n)) {
        ans.insert(n);
        n = f(n);
    }
    cout << ans.size();
    
}