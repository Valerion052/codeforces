#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

const int N = 100001;
vector <pair<int, int>> d[N];
map<int, int> exceptions;
set<int> controller;


void sieve (int k) {
    for (int i=2; i<=k; ++i) {
        if (d[i].empty()) {
            for (int j=i; j<=k; j+=i) {
                d[j].push_back({i, j});
            }
        }
    }
} 

int check_exceptions(int k) {

    vector <pair<int, int>> arr = d[k];
    for (auto x: arr) {
        if (exceptions.count(x.first)) {return exceptions[x.first];}
    }
    exceptions.insert(arr.begin(), arr.end());
    controller.insert(k);
    return 0;
}

void del_exceptions(int k) {
    vector<pair<int, int>> arr = d[k];
    for (auto x : arr) {
        exceptions.erase(x.first);
    }
    controller.erase(k);
}


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    sieve(n);

    for (int i=0; i<m; ++i) {
        char s;
        int num;
        cin >> s >> num;

        if (s=='+') {
            if (!controller.count(num)) {
                int value = check_exceptions(num);
                if (value !=0) {cout << "Conflict with " << value << '\n';}
                else {cout << "Success\n";}
            }
            else {cout << "Already on\n";}

        }
        else {
            if (!controller.count(num)) {cout << "Already off\n";}
            else {
                del_exceptions(num);
                cout << "Success\n";
            }

        }
    }
}
