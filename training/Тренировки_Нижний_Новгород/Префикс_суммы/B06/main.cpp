#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr_n[n], arr_m[m], cheak[1000001]{};

    for (int i=0; i<n; ++i) {
        int num;
        cin >> num;
        if (i>0) {arr_n[i] = arr_n[i-1]+num;}
        else {arr_n[i] = num;}
    }

    for (int j=0; j<m; ++j) {
        int num;
        cin >> num;
        if (j>0) {arr_m[j] = arr_m[j-1]+num;}
        else {arr_m[j] = num;}
        ++cheak[arr_m[j]];
    }

    if (arr_n[n-1] != arr_m[m-1]) {cout << 0;}
    else {
        int counter = 0;
        for (int k=0; k<n; ++k) {
            if (cheak[arr_n[k]]) {++counter;}
        }
        cout << counter;
    }
}