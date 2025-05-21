#include <iostream>
#include <vector>

using namespace std;

int n;
const int N=9;
vector<int> ans(N);
int mask = 0;

void DFS(int level) {

    if (level>n) {
        for (int x=1; x<=n; ++x) {cout << ans[x] << " ";}
        cout << "\n";
        return;
    }

    for (int i=1; i<=n; ++i) {
        
        if ((1<<(i-1)) & mask) {continue;}
        ans[level]=i;

        mask = (1<<(i-1)) | mask;
        DFS(level+1);
        mask = ~(1<<(i-1)) & mask;
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    DFS(1);
}