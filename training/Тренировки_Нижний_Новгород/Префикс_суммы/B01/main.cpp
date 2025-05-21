#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long arr[n+1]{};

    for (int i=1; i<=n; ++i) {
        int num;
        cin >> num;
        arr[i] = arr[i-1] + num;
    }

    if (arr[n]%3 != 0 || n<3) {cout << 0;}
    else {
        
        long long counter = 0;
        long long value = arr[n]/3;
        long long result = 0;

        for (int i=1; i<n; ++i) {
            if (arr[i] == 2*value) {result +=counter;}
            if (arr[i] == value) {++counter;}
            
        }

        cout << result;
    }
}