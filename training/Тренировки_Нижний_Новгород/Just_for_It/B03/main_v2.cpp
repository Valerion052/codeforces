#include <iostream>
#include <string>

using namespace std;


int main () {

    string s_1, s_2;
    cin >> s_1 >> s_2;

    int N_1=s_1.size();
    int N_2=s_2.size();
    int reverse = true;

    if (N_1 != N_2) {
        cout << "NO";
        return 0;
    }

    for (int i=0; i<N_1; i++) {
        if (s_1[N_1-i-1] != s_2[i]) {
            reverse=false;
            break;
        }
    }

    if (reverse) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}