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

    for (int i=0; i<n; ++i) {
        if (s[i]=='.') {dp_1[i]=count_1; count_1=-1; points.push_back(i);}
        if (s[n-i-1]=='.') {dp_2[n-i-1]=count_2; count_2=-1;}
        ++count_1; ++count_2;
    }

    for (int x=0; x<points.size(); ++x) {
        if (
            (dp_1[x]<=11 && dp_1[x]>0)
            &&
            dp_2[x]<=11 && dp_2[x]>0
        ) {
            if (dp_1[x]==11) {}
            else if (dp_1[x]==10) {}
            else if (dp_1[x]==9) {}
            else {}
        }
        else {return 0;}
    }





}