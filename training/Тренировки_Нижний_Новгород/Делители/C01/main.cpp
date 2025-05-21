#include <iostream>
#include <vector>
#include <set>
#include <bitset>

using namespace std;


const int N = 1001;
bitset<N> d;
set<int> primary, compound;

void sieve(int k) {
    for (int i=2; i<=k; ++i) {
        if (d[i]==0) {
            primary.insert(i);
            for (int j=i; j<=k; j+=i) {
                d[j]=1;
                if (i!=j) {compound.insert(j);}
            }
        }
    }
}


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int n;
    cin >> n;

    sieve(n);

    int _n = n+1;
    bool flag_compound = 1;
    vector<vector<bool>> arr(_n, vector<bool>(_n, 0));
    set<int> result;
    int lag_unique = 0;

    for (auto p: primary) {
        result.insert(p);
        for (int j=2; j<=n; ++j) {
            if (j%p==0) {arr[j][p]=1;}
            else {arr[j][p]=0;}
        }
        
        set<vector<bool>> unique(arr.begin() + 1, arr.begin() + _n);
        lag_unique = unique.size();
        if (lag_unique==n) {flag_compound=0;break;}
    }

    if (flag_compound) {
        for (auto c: compound) {
            for (int j=2; j<=n; ++j) {
                if (j%c==0) {arr[j][c]=1;}
                else {arr[j][c]=0;}
            }
            set<vector<bool>> unique(arr.begin() + 1, arr.begin() + _n);
            if (lag_unique != unique.size()) {
                result.insert(c);
                lag_unique = unique.size();
                if (unique.size()==n) {break;}
            }
            // else {
            //     for (int j=1; j<=n; ++j) {arr[j][c]=0;}    
            // }
        }
    }

    cout << result.size() << '\n';
    for (auto r: result) {cout << r << ' ';}
}