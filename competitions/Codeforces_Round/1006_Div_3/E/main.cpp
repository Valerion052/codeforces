#include <iostream>
#include <vector>

using namespace std;

int check(int c, int k) {
    return (c*(c-1))/2<=k;
}

int find_p(int k) {
    int l=2, r=500, ans = 0;
    while (l<=r) {
        int c = (l+r)/2;
        if (check(c, k)) {l=c+1; ans=c;}
        else {r=c-1;}
    }
    return ans;
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        if(k == 0) {
            cout << 1 << "\n";
            cout << 1 << ' ' << 1 << "\n";
            continue;
        }

        vector<int> group;
        int counter = 0;
        while (k>0) {
            int v = find_p(k);
            group.push_back(v);
            counter+=v;
            k -= (v*(v-1))/2;
        }
        
        cout << counter << "\n";
        
        int x = 1;
        int y = 1;

        for (int i=0; i<group.size(); ++i) {
            for (int j=0; j<group[i]; j++) {
                cout << x << ' ' << y << "\n";
                ++y;
            }
            ++x;
        }
    }
}