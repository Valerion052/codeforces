#include <iostream>
#include <vector>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    int min = (n-1);
    int max = (n+1)*2;

    if (m<min || m>max) {cout << -1; return 0;}

    vector<string> ans(2*n+1, "0");
    ans[0]=ans[2*n]="";

    for (int i=2; i<2*n; i+=2) {ans[i]="1"; --m;}
    for (int i=0; i<=2*n && m>0; i+=2) {if (m>0) {ans[i]+="1"; --m;}}

    if (m==1) {ans[0]+="1";}
    else if (m==2) {ans[0]+="1"; ans[2*n]+="1";}

    for (int i=0; i<=2*n; ++i) {cout << ans[i];}
}