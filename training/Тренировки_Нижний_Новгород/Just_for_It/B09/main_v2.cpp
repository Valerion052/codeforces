#include <iostream>

using namespace std;

struct Participant{
    char nick[21];
    int plus, minus, a, b, c, d, e, score;
};

int main() {

    int N, index_leader, max_score;
    Participant participant[50];

    cin >>N;

    for (int i=0; i<N; ++i) {
        Participant &p = participant[i];
        cin >> p.nick >> p.plus >> p.minus >> p.a >> p.b >> p.c >> p.d >> p.e;
        p.score = 100*p.plus-50*p.minus+p.a+p.b+p.c+p.d+p.e;
    }

    index_leader = 0;
    max_score = participant[0].score;

    for (int i=1; i<N; ++i) {
        if (participant[i].score>max_score) {
            index_leader = i;
            max_score = participant[i].score;
        }
    }

    cout << participant[index_leader].nick;

    return 0;
}