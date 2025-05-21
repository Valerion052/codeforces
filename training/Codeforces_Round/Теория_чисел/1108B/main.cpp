#include <iostream>
#include <set>

using namespace std;

const int N=10001;
int d[N]{};

int main() {
    int n;
    cin >> n;

    set<int> s;
    for (int i=0; i<n; ++i) {
        int num; cin >> num;
        s.insert(num);
        ++d[num];
    }

    int x=*s.rbegin();
    int y;

    auto it=s.begin();
    while (it!=s.end()) {if (x%(*it)==0) {--d[*it];} ++it;}
    for (int k=0; k<N; ++k) {if (d[k]>0) {y=k;}}

    cout << x << ' ' << y << "\n";
}