#include <iostream>
#include <algorithm>
#include <map>

using namespace std;





bool check (string &s, int c) {
    map<char, int> d;
    bool check[30]{};

    for (int i=0; i<=s.size()-c; ++i) {
        if (i==0) {for (int j=0; j<c; ++j) {++d[s[j]]; check[s[j]-'a']=1;}}
        else {
            --d[s[i-1]];
            ++d[s[i+c-1]];
            if (d[s[i-1]]==0) {check[s[i-1]-'a']=0;}
        }
    }
    for (bool x: check) {if (x) {return 1;}}
    return 0;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    string s; cin >> s;

    int l=1, r=s.size(), ans=0;
    while (l<=r) {
        int c=(l+r)/2;
        if (check(s, c)) {r=c-1; ans=c;}
        else {l=c+1;}
    }
    cout << ans;

}