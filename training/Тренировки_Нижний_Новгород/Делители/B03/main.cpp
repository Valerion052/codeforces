#include <iostream>
#include <vector>
#include <map>

using namespace std;

long long MOD = 1073741824;
const int N = 100;
int d[N];
map<int, vector<int>> dict;

void sieve() {
    for (int i=2; i<=N; ++i) {
        if (d[i]==0) {
            for (int j=i; j<=N; j+=i) {
                d[j] = i;
            }
        }
    }
}

vector<int> getD(int k) {
    vector<int> ans;
    while(k>1) {
        ans.push_back(d[k]);
        k/=d[k];
    }
    return ans;
}

void make_dict() {
    for (int i=1; i<=N; ++i) {
        dict[i] = getD(i);
    }
}

int calculate(int a, int b, int c) {
    int ans = 1;
    map<int, int> result;
    for (auto _a: dict[a]) {++result[_a];}
    for (auto _b: dict[b]) {++result[_b];}
    for (auto _c: dict[c]) {++result[_c];}
    for (auto x: result) {ans *=x.second+1;}
    return ans;
}


int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    sieve();
    make_dict();

    int result = 0;

    for (int _a=1; _a<=a; ++_a) {
        for (int _b=1; _b<=b; ++_b) {
            for (int _c=1; _c<=c; ++_c) {
                result = result + calculate(_a, _b, _c)%MOD;
            }
        }
    }

    cout << result;
}