#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    long long _1=0, _2=0, _3=0;
    int arr[n];
    for (int i=0; i<n; ++i) {cin>>arr[i];}

    for (int i=0; i<n; i+=3) {_1+=arr[i];}
    for (int i=1; i<n; i+=3) {_2+=arr[i];}
    for (int i=2; i<n; i+=3) {_3+=arr[i];}

    if (_1>max(_2, _3)) {cout << "chest";}
    else if (_2>max(_1, _3)) {cout << "biceps";}
    else {cout << "back";}
}