#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string arr[n];
    map<string, string> Chemp, User;

    for (int _n=0; _n<n; ++_n) {string s; cin >> s; arr[_n] = s; Chemp[s] = "N/A";}

    for (int _m=0; _m<m; ++_m) {
        string i, j;
        int k;
        cin >> i >> j >> k;
        if (User.find(i) == User.end()) {User[i] = "N/A";}
        if (k==100 && User[i] == "N/A" && Chemp[j]=="N/A") {User[i] = j; Chemp[j]=i;}
    }
    
    for (string x:arr) {cout << x << " : " << Chemp[x] << '\n';}
}