#include <iostream>
#include <queue>

using namespace std;

const int N = 20001;

int BFS(int start, int end) {
    queue<int> q;
    int visited[N]{};
    q.push(start);
    visited[start]=0;

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        int row_1 = v-1, row_2 = v*2;
        if (row_1>0) {
            if (visited[row_1]==0) {q.push(row_1); visited[row_1]=visited[v]+1;}
        }
        if (row_2<=end*2) {
            if (visited[row_2]==0) {q.push(row_2); visited[row_2]=visited[v]+1;}
        }
        if (row_1==end || row_2==end) {break;}
    }

    return visited[end];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    cout << BFS(n, m);

}