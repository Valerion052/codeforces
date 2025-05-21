#include <iostream>

using namespace std;

int main () {

    int N;
    int sum = 0, even_count = 0, odd_count = 0;

    cin >> N;

    for (int i=0; i<N; i++) {
        int num;
        cin >> num;
        sum +=num;
        if (num%2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    int result = (sum%2 == 0) ? even_count : odd_count;

    cout << result;

    return 0;
}