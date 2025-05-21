#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int pref_m[n], pref_p[n];
        int suf_e[n], suf_p[n];
        if (s[0]=='m') {pref_m[0]=0;}
        if (s[0]=='p') {pref_p[0]=0;}
        if (s[n-1]=='e') {suf_e[n-1]=n-1;}
        if (s[n-1]=='p') {suf_p[n-1]=n-1;}
        
        for (int i=1; i<n; ++i) {
            pref_m[i]=pref_m[i-1];
            pref_p[i]=pref_p[i-1];
            suf_e[n-1-i]=suf_e[n-i];
            suf_p[n-1-i]=suf_p[n-i];

            if (s[i]=='m') {pref_m[i] = i;}
            if (s[i]=='p') {++pref_p[i] = i;}
            if (s[n-1-i]=='e') {++suf_e[n-1-i] = n-1-i;}
            if (s[n-1-i]=='p') {++suf_p[n-1-i] = n-1-i;}
        }


        cout <<

        // int min_map = 1e9+7;
        // int min_pie = 1e9+7;
        
        // for (int j=1; j<n-1; ++j) {
        //     int value;
        //     if (s[j]=='a') {
        //         value = j-pref_m[j]+1 + suf_p[j]-j+1;
        //         if (value<min_map) {min_map = value;}
        //     }
        //     if (s[j]=='i') {
        //         value = j-pref_p[j]+1 + suf_e[j]-j+1;
        //         if (value<min_pie) {min_pie = value;}
        //     }
        // }

        // cout << min(min_map, min_pie) << '\n';
    }
}