#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;

        int result = (max(a, b)-min(a,b))/10;
        if ((max(a, b)-min(a,b))%10!=0) {++result;}

        cout << result << '\n';
    }
}