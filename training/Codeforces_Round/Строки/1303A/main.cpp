#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;

        int it_0=-1, it_1=-1;
        for (int i=0; i<s.size(); ++i) {
            if (s[i]=='1') {if (it_0==-1) {it_0=i;} it_1=i;}
        }

        if (it_0==-1 || it_1==-1) {cout << 0 << "\n"; continue;}
        else {
            int ans=0;
            for (int i=it_0; i<=it_1; ++i) {if (s[i]!='1') {++ans;}}
            cout << ans << "\n";
        }
        
    }   

}