#include <iostream>

using namespace std;

int main () {

    int N;
    int n[100];
    int sum = 0;
    int result = 0;

    cin >> N;

    for (int i=0; i<N; i++) {
        int num;
        cin >> num;
        n[i]=num;
        sum +=num;
    }

    for (int i=0; i<N; i++) {
        if ((sum-n[i])%2 == 0) {
            result++;
        }
    }

    cout << result;

    return 0;
}