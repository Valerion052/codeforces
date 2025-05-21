#include <iostream>

using namespace std;

int main() {
    int nA, nB, k, m;
    cin >> nA >> nB;
    cin >> k >> m;

    int arrA[nA], arrB[nB];

    for (int i=0; i<nA; ++i) {cin >> arrA[i];}

    for (int j=0; j<nB; ++j) {cin >> arrB[j];}

    if (arrA[k-1] < arrB[nB-m]) {cout << "YES";} else {cout << "NO";}

}