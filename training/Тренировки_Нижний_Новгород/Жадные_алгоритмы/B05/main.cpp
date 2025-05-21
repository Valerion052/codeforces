#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[5001]{};
    int result = 0;

    for (int i=0; i<n; ++i) {
        int num;
        cin >> num;
        ++arr[num];
    }

    for (int j=1; j<n+1; ++j) {
        if (arr[j] == 0) {++ result;}
    }

    cout << result;

}