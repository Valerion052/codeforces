#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    int _25=0, _50=0, _100=0;
    bool flag=1;
    for (int j=0; j<n && flag; ++j) {
        if (arr[j]==25) {++_25;}
        else if (arr[j]==50) {--_25, ++_50;}
        else {
            if (_50>0) {--_25, --_50;}
            else {_25-=3;}
        }

        if (_25<0 || _50 <0) {flag=0;}
    }
    if (flag) {cout << "YES";} else {cout << "NO";}


}