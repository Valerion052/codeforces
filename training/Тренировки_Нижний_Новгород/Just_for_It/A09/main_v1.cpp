#include <iostream>

using namespace std;


int main() {

    int N;
    int n[100];

    cin >> N;
    
    for (int i = 0; i < N; ++i) {
        cin >> n[i];
        }
    
    int k = 0;
    for (int i = 0; i < N; ++i) {

        int count_i = 0;

        for (int j = 0; j < N; ++j) {
            if (n[i] == n[j]) {
                count_i++;
                }
        }
        
        int _k = (count_i*100)/N;
        
        if (_k>k) {
            k = _k;
            }
    }

    cout << k << '%';

    return 0;
}