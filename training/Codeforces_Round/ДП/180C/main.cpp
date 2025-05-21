#include <iostream>
#include <vector>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int n=s.size();

    int dp_1[n+2]{}, dp_2[n+2]{};
    dp_1[1] = s[0]-'a'>=0;
    dp_2[n] = s[n-1]-'a'<0;
    for (int i=2; i<=n; ++i) {dp_1[i]=dp_1[i-1]; if (s[i-1]-'a'>=0) {++dp_1[i];}}
    for (int i=n-1; i>=1; --i) {dp_2[i]=dp_2[i+1]; if (s[i-1]-'a'<0) {++dp_2[i];}}

    int ans=1e9;
    for (int j=1; j<=n+1; ++j) {ans=min(ans, dp_1[j-1]+dp_2[j]);}
    cout << ans;




}