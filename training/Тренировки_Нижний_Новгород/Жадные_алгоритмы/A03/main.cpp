#include <iostream>

using namespace std;

int main() {
    int s;
    cin >> s;

    long long result = s%9;

    for (int i=0; i<s/9; ++i) {
        
        result = result*10+9;
    }

    cout << result;
}