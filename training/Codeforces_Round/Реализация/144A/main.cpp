#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n];
    int min=101, max=-1, it_max=0, it_min=0;
    for (int i=0; i<n; ++i) {
        int num;
        cin >> num;

        if (num>max) {max=num; it_max=i;}
        if (num<=min) {min=num; it_min=i+1;}
    }

    if (it_max<it_min) {cout << it_max + n-it_min;} else {cout << it_max + n-it_min-1;}
}