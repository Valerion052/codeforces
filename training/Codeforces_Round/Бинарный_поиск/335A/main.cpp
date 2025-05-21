#include <iostream>
#include <map>

using namespace std;



bool check (map<char, int> d, int c, int n) {

    int ans=0;
    for (auto [k, v]: d) {
        int value = v%c!=0 ? v/c+1 : v/c;
        ans += value;
    }    
    return ans<=n;


}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    string s;
    int n;
    cin >> s >> n;
    
    map<char, int> d;
    for (int i=0; i<s.size(); ++i) {++d[s[i]];}

    int l=1, r=1e3, ans=-1;
    while (l<=r) {
        int c=(l+r)/2;
        if (check(d, c, n)) {r=c-1; ans=c;}
        else {l=c+1;}
    }

    cout << ans << "\n";
    if (ans>0) {
        string ans_s="";
        for (auto [k, v]: d) {
            int value = v%ans!=0 ? v/ans+1 : v/ans;
            ans_s+=string(value, k);
        }
        cout << ans_s << string(n-ans_s.size(), 'a'); 
    }
    

}