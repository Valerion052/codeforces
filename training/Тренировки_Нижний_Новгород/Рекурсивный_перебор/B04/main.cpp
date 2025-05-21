#include <iostream>
#include <map>

using namespace std;

map<string, int> names = {
    {"Anka", 0}, {"Chapay", 1}, {"Cleo", 2},
    {"Troll", 3}, {"Dracul", 4}, {"Snowy", 5},
    {"Hexadecimal", 6}
};

const int N=7;
int a, b, c;
int d[7][7]{};
int group[7];
int ans_1=1e9+1;
int ans_2=0;


bool check() {
    bool _0=1, _1=1, _2=1;
    for (int i=0; i<N; ++i) {
        if (group[i]==0) {_0=0;}
        if (group[i]==1) {_1=0;}
        if (group[i]==2) {_2=0;}
    }
    return (_0 || _1 || _2);
}

int likes() {
    int count=0;
    for (int _i=0; _i<N; ++_i) {
        for (int _j=0; _j<N; ++_j) {
            if (group[_i]==group[_j]) {count+=d[_i][_j];}
        }
    }
    return count;
}

void solve(int pos, int boss[6][3]) {

    if (pos==N) {
        int size_group[3] = {0, 0, 0};
        int values[3] = {0, 0, 0};
        for (int i=0; i<N; ++i) {++size_group[group[i]];}
        
        if (size_group[0]!=0 && size_group[1] && size_group[2]) {
            for (int j=0; j<6; ++j) {
                values[0] = boss[j][0]/size_group[0];
                values[1] = boss[j][1]/size_group[1];
                values[2] = boss[j][2]/size_group[2];

                int _min = min(values[0], min(values[1], values[2]));
                int _max = max(values[0], max(values[1], values[2]));
                int delta = _max - _min;
                
                if (delta<ans_1) {
                    ans_1=delta;
                    ans_2=likes();
                }
                else if (delta==ans_1) {
                    ans_2=max(ans_2, likes());
                }
            }
        }
        return;
    }

    for (int g=0; g<3; ++g) {
        group[pos]=g;
        solve(pos+1, boss);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i=0; i<n; ++i) {
        string s_1, s_2, s_3;
        cin >> s_1 >> s_2 >> s_3;
        d[names[s_1]][names[s_3]]=1;
    }
    cin >> a >> b >> c;

    int boss[6][3] = {
        {a, b, c},
        {a, c, b},
        {b, a, c},
        {b, c, a},
        {c, a, b},
        {c, b, a}
    };

    solve(0, boss);
    cout << ans_1 << ' ' << ans_2;

}