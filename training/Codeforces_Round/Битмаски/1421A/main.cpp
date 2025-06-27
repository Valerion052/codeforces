#include <iostream>

using namespace std;

const int N =31;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;

        int d[N]{};
        
        int x=0;
        for (int i=0; i<N; ++i) {
            if (((a>>i)&1)==((b>>i)&1) && ((a>>i)&1)==1) {x+=1<<i;}
        }
        cout << (a^x) + (b^x) << "\n";

    }
}