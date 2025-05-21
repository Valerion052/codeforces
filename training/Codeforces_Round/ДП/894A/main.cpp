#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    cin >> s;
    int n = s.size();

    int arr_l[n]{}, arr_r[n]{};
    if (s[0]=='Q') {arr_l[0]=1;}
    if (s[n-1]=='Q') {arr_r[n-1]=1;}

    for (int i=1; i<n; ++i) {
        arr_l[i]=arr_l[i-1];
        arr_r[n-1-i]=arr_r[n-i];
        if(s[i]=='Q') {++arr_l[i];}
        if(s[n-1-i]=='Q') {++arr_r[n-1-i];}
    }

    int ans=0;
    for (int j=0; j<n; ++j) {if(s[j]=='A') {ans+=arr_l[j]*arr_r[j];}}
    cout << ans;
}