#include <iostream>

using namespace std;

int main() {

    int x;
    cin >> x;

    int result = x/5;
    if (x%5!=0) {++result;}
    cout << result;
}