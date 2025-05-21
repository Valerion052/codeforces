#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int result = 0;

    for (int i=0; i<n; ++i) {
        int sum = 0;
        for (int j=0; j<3; ++j) {int num; cin >> num; sum += num;}
        if (sum > 1) {++result;}
    }

    cout << result;
}