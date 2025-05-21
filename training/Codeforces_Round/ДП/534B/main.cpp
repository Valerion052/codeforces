#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int v_1, v_2, t, d;
    cin >> v_1 >> v_2 >> t >> d;

    int ans=0;

    for (int i=0; i<t; ++i) {
        int S_1 = v_1+i*d;
        int S_2 = v_2+(t-1-i)*d;
        ans+=min(S_1, S_2);
    }
    cout << ans;


}