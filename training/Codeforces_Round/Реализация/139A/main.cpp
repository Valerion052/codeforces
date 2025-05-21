#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[8]{};
    for (int i=1; i<8; ++i) {
        int num;
        cin >> num;
        arr[i] = arr[i-1] + num;
    }

    int mod = n%arr[7];
    if (mod==0) {mod=arr[7];}
    
    for (int j=1; j<8; ++j) {
        if (arr[j]>=mod) {cout << j; return 0;}
    }
}