#include <iostream>
#include <queue>

using namespace std;

const int N =31;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k; cin >> n >> k;

    priority_queue<int> pq;
    for (int i=0; i<N; ++i) {if ((n>>i)&1) {pq.push(1<<i);}}

    int count = pq.size();
    while (count<k) {
        int x=pq.top();
        if (x==1) {break;}
        pq.pop(); pq.push(x/2); pq.push(x/2);
        ++count;
    }

    if (pq.size()!=k) {cout << "NO";}
    else {
        cout << "YES\n";
        while (!pq.empty()) {cout << pq.top() << ' '; pq.pop();}
    }
}