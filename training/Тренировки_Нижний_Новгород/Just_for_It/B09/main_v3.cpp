#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

struct Participant{
    char nick[21];
    int plus, minus, a, b, c, d, e, score;

    Participant() : plus(0), minus(0), a(0), b(0), c(0), d(0), e(0), score(0) {}
};

int main() {

    int N;
    cin >>N;
    vector<Participant> participants(N);
    cin.ignore();

    for (int i=0; i<N; ++i) {
        string line;
        getline(cin, line);
        istringstream iss(line);
        Participant &p = participants[i];
        iss >> p.nick >> p.plus >> p.minus >> p.a >> p.b >> p.c >> p.d >> p.e;
        p.score = 100*p.plus-50*p.minus+p.a+p.b+p.c+p.d+p.e;
    }

    int max_score = participants[0].score;
    string leader_nick = participants[0].nick;

    for (int i = 1; i < N; ++i) {
        if (participants[i].score > max_score) {
            max_score = participants[i].score;
            leader_nick = participants[i].nick;
        }
    }

    cout << leader_nick;

    return 0;
}