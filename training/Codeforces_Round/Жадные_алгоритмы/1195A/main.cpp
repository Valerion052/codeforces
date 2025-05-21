#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int  arr[k+1]{};
    int integer = 0, remainder=0;


    for (int i=0; i<n; ++i) {
        int num;
        cin >> num;
        ++ arr[num];
    }

    for (int j=1; j<k+1; ++j) {
        integer += arr[j]/2;
        remainder += arr[j]%2;
    }

    cout << integer*2 + remainder/2 + remainder%2;
}
