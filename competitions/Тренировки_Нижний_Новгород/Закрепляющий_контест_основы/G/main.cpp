#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i=0; i<n; ++i) {cin >> arr[i];}

    int counter = 0;

    for (int j=0; j<n; ++j) {

        int value = arr[j] - counter;
        counter = value%2;
        if (value < 0) {cout << "NO"; return 0;}
    }

    if (counter==0) {cout << "YES";} else {cout << "NO";}
}

