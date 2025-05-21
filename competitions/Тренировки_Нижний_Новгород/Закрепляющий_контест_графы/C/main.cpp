#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n;
const int N=1001;
bool visited[N]{};
bool d_1[N], d_2[N];


void reverse(int x) {
    for (int i=x; i>0; --i) {
        if (d_2[i]) {visited[i]=1;}
    }
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int s;
    cin >> n >> s;

    for (int i=1; i<=n; ++i) {cin >> d_1[i];}
    for (int j=1; j<=n; ++j) {cin >> d_2[j];}

    if (!d_1[1]) {cout << "NO"; return 0;}

    for (int _i=1; _i<=n; ++_i) {
        if (d_1[_i]) {
            visited[_i]=1;
            if (d_2[_i]) {reverse(_i);}
        }
    }

    if (visited[s]) {cout << "YES";} else {cout << "NO";}



}