#include <iostream>
#include <algorithm>

using namespace std;


const int N=2e5+1;
const int M=2e5+1;

struct E {int u, v; long long w;};
E arr[M];
int p[N], s[N];
long long d[N];

int _find(int v) {
    while (v!=p[v]) {p[v]=p[p[v]]; v=p[v];}
    return v;
}

void unite(int a, int b, long long w) {
    a=_find(a); b=_find(b);
    if (a==b) {d[a]=min(d[a], w); return;}
    if (s[a]<s[b]) {swap(a, b);}
    p[b]=a; s[a]+=s[b];
    d[a]=min(min(d[a], d[b]), w);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;

        for (int i=0; i<m; ++i) {cin >> arr[i].u >> arr[i].v >> arr[i].w;}
        sort(arr, arr+m, [](const E& a, const E& b) {return a.w < b.w;});
        for (int i=1; i<=n; ++i) {p[i]=i; s[i]=1; d[i]=1e18;}

        long long ans=1e18;
        for (int i=0; i<m; ++i) {
            unite(arr[i].u, arr[i].v, arr[i].w);
            if (_find(1)==_find(n)) {
                int v=_find(1);
                ans=min(ans, arr[i].w+d[v]);
            }
        }
        cout << ans << "\n";
    }
}
