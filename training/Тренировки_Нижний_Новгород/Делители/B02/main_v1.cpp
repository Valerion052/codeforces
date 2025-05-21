#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

const int N = 1e7;
bitset<N> d;
vector<int> prime, ans;

void sieve() {
    for (int i=2; i<N; ++i) {
        if (d[i] == 0) {
            prime.push_back(i);
            for (int j=2*i; j<N; j+=i) {
                d[j] = 1;
            }
        }
    }
}

void getD(long long k) {
    long long start = k;
    while (k > 1) {
        long long f = k;
        for (auto x: prime) {
            if (k%x==0) {
                // cout << k << " - " << x;
                if (start!=x) {ans.push_back(x);}
                k/=x;
                // cout << " - " << k << endl;
                break;
            }
        }
        if (f==k || ans.size() > 2) {return;}
    }    
}

int main() {
    long long n;
    cin >> n;

    sieve();
    getD(n);

    // cout << 274875809788/4;

    
    // for (auto x: ans) {cout << x << ' ';}
    // cout << ans.size();
    if (ans.size() == 0) {cout << "1\n" << 0; return 0;}
    else if (ans.size() == 1) {cout << 2;}
    else if (ans.size() == 2) {
        if (ans[0] * (long long)ans[1] == n) {cout << 2;}
        else {cout << "1\n" << ans[0] * ans[1];}
    }
    else {cout << "1\n" << ans[0] * ans[1];}


    
    // if (check(n)) {cout << "1\n" << 0; return 0;}
    // else {}

    // // if (ans.size() < 3) {cout << 2;}
    // else {cout << "1\n" << ans[0] * ans[1];}
}