#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int _100=0, _200=0;
    for (int i=0; i<n; ++i) {
        int num; cin >> num;
        if (num==100) {++_100;}
        else {++_200;}
    }

    bool flag = _100%2==0 && _200%2==0 && n>1 ? 1:0;
    
    while (!flag && _100>0 && _200>0) {
        --_200; _100-=2;
        flag = _100%2==0 && _200%2==0 ? 1:0;
    }
    
    if (flag) {cout << "YES";} else {cout << "NO";}
    
}