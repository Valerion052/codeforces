#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    int n=s.size();

    int dp_1[n]{}, dp_2[n]{};
    int count_1=0, count_2=0;
    vector<int> points;
    bool flag=0;
    for (int i=0; i<n; ++i) {
        if (s[i]=='.') {dp_1[i]=count_1; count_1=-1; points.push_back(i); flag=1;}
        if (s[n-i-1]=='.') {dp_2[n-i-1]=count_2; count_2=-1;}
        ++count_1; ++count_2;
    }
    points.push_back(n+1);

    if (dp_1[points[0]]>8) {flag=0;}
    int start=0;
    vector<string> ans;
    for (int i=0; i<points.size()-1 && flag; ++i) {
        int x = points[i];
        if ((dp_1[x]>0 && dp_2[x]==0) || (dp_1[x]==0 && dp_2[x]>0) || (dp_1[x]==0 && dp_2[x]==0)) {flag=0; break;}
        if (dp_1[x]>11 || dp_2[x]>11) {flag=0; break;}

        string local_ans="";
        local_ans+=s.substr(start, dp_1[x]) + '.';

        if (i==points.size()-2) {if (dp_2[x]>3) {flag=0;} local_ans+=s.substr(x+1, dp_2[x]);}
        else if (dp_2[x]==11) { local_ans+=s.substr(x+1, 3); dp_1[points[i+1]]-=3; start=x+4;}
        else if (dp_2[x]==10) {local_ans+=s.substr(x+1, 2);dp_1[points[i+1]]-=2; start=x+3;}
        else {local_ans+=s.substr(x+1, 1); dp_1[points[i+1]]-=1; start=x+2;}
        ans.push_back(local_ans);
    }

    if (flag) {cout << "YES\n";} else {cout << "NO"; return 0;}
    for (string x: ans) {cout << x << "\n";}
}