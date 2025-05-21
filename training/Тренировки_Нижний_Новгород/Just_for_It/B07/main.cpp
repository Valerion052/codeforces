#include <iostream>
#include <algorithm>

using namespace std;

int main () {

    int N;
    int result = 0, passengers = 0;
    
    cin >> N;

    for (int i=0; i<N; i++) {
        int a, b;
        cin >> a >> b;

        passengers -=a;

        // if (passengers < 0) {
        //     passengers=0;
        // }

        passengers +=b;
        result = max(result, passengers);
    }

    cout << result;

    return 0;
}