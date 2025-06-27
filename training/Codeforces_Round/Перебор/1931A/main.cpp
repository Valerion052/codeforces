#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        char d[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

        string ans="", local_ans="";
        int value=1e9;
        for (int i=0; i<26; ++i) {
            for (int j=0; j<26; ++j) {
                for (int k=0; k<26; ++k) {
                    local_ans+=d[i]; local_ans+=d[j]; local_ans+=d[k];
                    int local_value=(d[i]-'a')+(d[j]-'a')+(d[k]-'a')+3;
                    if (local_value<value && local_value==n) {value=local_value; ans=local_ans;}
                    local_ans="";
                }
            }
        }
        cout << ans << "\n";
    }

}   