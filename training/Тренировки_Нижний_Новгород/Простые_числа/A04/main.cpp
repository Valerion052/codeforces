#include <iostream>
 
using namespace std;

const int N = 10000001;
bool d[N];

void sieve(int k) {
    for (int i=2; i<=k; ++i) {
        if (d[i]==0) {
            for (int j=2*i; j<=k; j+=i) {
                d[j]=1;
            }
        }
    }
}


 
int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    long long n;
    cin >> n;
    
    sieve(N);
    d[1] = 1;
 
    for (int i=1; i<=n; ++i) {
        if (d[i]==0) {cout << 1;} else {cout << 0;}
        cout << ' ';
    }
}