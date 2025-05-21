#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n, m;
    cin >> n >> m;

    if (n.size() != m.size()) {cout << "WRONG_ANSWER"; return 0;}

    string arr[10]{""};
    
    for (int i=0; i<n.size(); ++i) {arr[n[i]-'0'] += n[i];}

    string result = "";
    for (int i=1; i<10; ++i) {result += arr[i];}
    if (result.size() > 0) {result.insert(1, arr[0]);} else {result=arr[0];}

    bool flag = true;

    for (int i=0; i<m.size(); ++i) {
        if (result[i] != m[i]) {flag = false; break;}
    }

    if (flag) {cout << "OK";} else {cout << "WRONG_ANSWER";}

}
