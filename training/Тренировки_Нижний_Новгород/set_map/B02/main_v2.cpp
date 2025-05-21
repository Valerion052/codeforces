#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    multiset<int> s_1, s_2, s_3;
    
    for (int i=0; i<n; ++i) {int num; cin >> num; s_1.insert(num);}
    for (int j=0; j<n-1; ++j) {int num; cin >> num; s_2.insert(num);}
    for (int k=0; k<n-2; ++k) {int num; cin >> num; s_3.insert(num);}

    for (auto _i=s_2.begin(); _i!=s_2.end(); ++_i) {s_1.erase(s_1.find(*_i));}
    for (auto _j=s_3.begin(); _j!=s_3.end(); ++_j) {s_2.erase(s_2.find(*_j));}

    cout << *s_1.begin() << '\n';
    cout << *s_2.begin();
}