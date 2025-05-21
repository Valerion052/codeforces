#include <iostream>
#include <vector>

using namespace std;

int n, k;
const int N=9;
int d[N];
string arr[N];
int mask=0;
int ans = 1e9;


void DFS(int level) {

    if (level==k) {
        int _min=1e9, _max=0;
        for (int i=0; i<n; ++i) {
            string s="";
            for (int j=0; j<k; ++j) {s+=arr[i][d[j]];}
            int _s = stoi(s);
            _min = min(_min, _s);
            _max = max(_max, _s);
        }
        ans=min(ans, _max-_min);
        return;
        // for (int j=0; j<k; ++j) {cout << d[j];} cout << "\n"; return;
    }

    for (int i=0; i<k; ++i) {
                
        if ((1<<(i)&mask)) {continue;}
        d[level]=i;
        
        mask = (1<<i) | mask;
        DFS(level+1);
        mask = ~(1<<i) & mask;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    DFS(0);
    cout << ans;





}