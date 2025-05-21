#include <iostream>
#include <bitset>

using namespace std;

const int N = 1000001;
bitset<N> d;

void sieve (int k) {
    for (int i=2; i*i<=k; ++i) {
        if (d[i] == 0) {
            for (int j=i*i; j<=k; j+=i) {
                d[j] = 1;
            }
        }
    }
}

int main() {

    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    
    int n;
    cin >> n;

    sieve(N);
    d[0]=d[1] = 1;

    for (int i=0; i<n; ++i) {
        int num;
        cin >> num;
        
        if (d[num]==0) {cout <<"yes";}
        else {cout << "no";}
        cout << endl;
    }
}