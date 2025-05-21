#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

const int N = 1001;

bitset<N> d;
vector<int> prime;
vector<int> result;


void sieve(int k) {
    for (int i=2; i<=k; ++i) {
        if (d[i]==0) {
            prime.push_back(i);
            for (int j=2*i; j<=k; j+=i) {
                d[j] = 1;
            }
        }
    }
}

void make_values(int k) {
    for (int i=1; i<prime.size(); ++i) {
        int value = prime[i-1]+prime[i]+1;
        if (value>k) {return;}
        if (!d[value]) {result.push_back(value);}
    }
}


int main() {
    int n, k;
    cin >> n >> k;

    sieve(n);
    make_values(n);

    if (result.size()>=k) {cout << "YES";} else {cout << "NO";}
}
