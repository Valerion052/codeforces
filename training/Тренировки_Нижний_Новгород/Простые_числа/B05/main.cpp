#include <iostream>
#include <algorithm>
#include <map>
#include <bitset>
#include <vector>
#include <set>

using namespace std;

const int N = 1000;
bitset<N> d;
vector<int> arr;

void sieve(int k) {
    for (int i=2; i<=k; ++i) {
        if (d[i]==0) {
            arr.push_back(i);
            for (int j=2*i; j<=k; j+=i) {
                d[j]=1;
            }
        }
    }
}

pair<int, char> find_sym(string s) {
    map<char, int> result;
    int max_sym = 0;
    char sym;

    for (auto x: s) {++result[x];}
    
    for (auto x: result) {
        if (max_sym < x.second) {
            max_sym = x.second;
            sym = x.first;
        }
    }

    return {max_sym, sym};
}


int main() {
    string s;
    cin >> s;

    int n = s.size();
    sieve(n);

    set<int> identical;

    for (int i = 1; i<=arr.size(); ++i) {
        if (n/arr[i-1]>1) {
            for (int j=1; j<=n/arr[i-1]; ++j) {
                identical.insert(arr[i-1]*j);
            } 
        }
    }

    int n_identical = identical.size();
    pair<int, char> sym = find_sym(s);
    if (sym.first < n_identical) {cout << "NO"; return 0;} else {cout << "YES\n";}

    for (auto it = s.begin(); it != s.end() && n_identical>0;) {
        if (*it == sym.second) {
            it = s.erase(it);
            --n_identical;
        } else {++it;}
    }

    for (int p=1; p<=n; ++p) {
        if (identical.find(p) != identical.end()) {cout << sym.second;}
        else {
            cout << *s.begin();
            s.erase(s.begin());
        }
        
    }

    







}