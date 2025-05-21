#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int last = max(n, m);
    int second = min(n, m);

    int result = last/2*second;
    if (last%2>0) {result += second/2;}

    cout << result;
}