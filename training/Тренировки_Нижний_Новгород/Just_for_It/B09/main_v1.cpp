#include <iostream>

using namespace std;

int main() {

    int N;
    string result;
    int max_score = 0;

    cin >>N;

    for (int i=0; i<N; ++i) {
        string nick;
        int plus, minus, a, b, c, d, e;
        int score = 0;

        cin >> nick >> plus >> minus >> a >> b >> c >> d >> e;

        score += 100*plus-50*minus+a+b+c+d+e;

        if (i==0) {
            result = nick;
            max_score = score;
        } else if (score > max_score) {
            result = nick;
            max_score = score;
        }
    }

    cout << result;

    return 0;
}