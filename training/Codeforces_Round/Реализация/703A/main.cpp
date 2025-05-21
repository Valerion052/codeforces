#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int count_1 = 0, count_2 = 0;
    while (n--) {
        int m, c;
        cin >> m >> c;

        if (m>c) {++count_1;}
        else if (m<c) {++count_2;}
    }

    if (count_1>count_2) {cout << "Mishka";}
    else if (count_1<count_2) {cout << "Chris";}
    else {cout << "Friendship is magic!^^";}
}