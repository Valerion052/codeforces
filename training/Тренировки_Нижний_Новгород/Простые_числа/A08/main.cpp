#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

const int N = 1000001;
bitset<N> d;
vector<int> arr;

void erase_elements() {
    for (int i=0; i<N; ++i) {
        if (d[i]==0) {arr.push_back(i);}
    }
}

void sieve(int k) {
    for (long long i=2; (long long)i*i<=k; ++i) {
        if (d[i]==0) {
            for (long long j=i*i; j<=k; j+=i) {
                d[j] = 1;
            }
        }
    }
}

bool check(long long k) {
    if (k<=1) {return 0;}
    for (auto x: arr) {
        if (k%(long long)x==0 && k!=x) {return 0;}
    }
    return 1;
}


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve(N);
    d[0]=d[1]=1;
    erase_elements();

    long long n;
    cin >> n;

    for (int i=0; i<n; ++i) {
        long long x;
        cin >> x;

        if (check(x)) {cout << "yes";}
        else {cout << "no";}
        cout << '\n';

    }



    // for (int i=0; i<10; ++i) {cout << arr[i] << ' ';}

}