#include <iostream>
#include <vector>

using namespace std;

const int N=31;
bool type[N]{};
int n, u, r;
vector<int> A(N), B(N), K(N), P(N);
int ans=0;

vector<int> operation_1(vector<int> a, vector<int> &b) {
    for (int i=0; i<n; ++i) {a[i] ^= b[i];}
    return a;
}

vector<int> operation_2(vector<int> a, vector<int> &p) {
    vector<int> _a = a;
    for (int i=0; i<n; ++i) {a[i] = _a[p[i]-1]+r;}
    return a;
}

int operation_3(vector<int> a, vector<int> &k) {
    int ans=0;
    for (int i=0; i<n; ++i) {ans += a[i]*k[i];}
    return ans;
}


void DFS(int x, vector<int> &_a) {

    if (x==u) {
        vector<int> a = _a;
        for (int j=0; j<u; ++j) {
            if (type[j]) {a = operation_1(a, B);}
            else {a = operation_2(a, P);}
        }
        ans = max(ans, operation_3(a, K));
        return;
    }

    for (int i=0; i<2; ++i) {
        type[x]=i;
        DFS(x+1, _a);
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> u >> r;
    for (int i_a=0; i_a<n; ++i_a) {cin >> A[i_a];}
    for (int i_b=0; i_b<n; ++i_b) {cin >> B[i_b];}
    for (int i_k=0; i_k<n; ++i_k) {cin >> K[i_k];}
    for (int i_p=0; i_p<n; ++i_p) {cin >> P[i_p];}

    DFS(0, A);
    cout << ans;
}