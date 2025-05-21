#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;

        int first = x[0]-'0';
        int ans = (first-1)*10;

        if (x.size()==1) {ans+=1;}
        else if (x.size()==2) {ans+=3;}
        else if (x.size()==3) {ans+=6;}
        else if (x.size()==4) {ans+=10;}

        cout << ans << "\n";
    }
}