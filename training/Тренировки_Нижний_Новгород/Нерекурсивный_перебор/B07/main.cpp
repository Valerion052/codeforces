#include <iostream>

using namespace std;


int count_size_num(int k) {
    int ans=0;
    while(k>0) {++ans; k/=10;}
    return ans;
}

bool check_sqrt(int x) {
    int l=1, r=x, ans=1;
    while (l<=r) {
        long long c=(l+r)/2;
        if (c*c<=x) {l=c+1; ans=c;}
        else {r=c-1;}
    }
    return ans*ans==x;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;


    int k=1;
    int total=(1<<s.size());
    int mask=1;

    int ans=-1;


    for (int i=0; i<total; ++i) {
        int v=0;
        for (int j=0; j<s.size(); ++j) {
            if ((i>>j)&mask) {v=v*10+(s[j]-'0');}
        }
        if (check_sqrt(v)) {ans=max(ans, count_size_num(v));}
    }

    if (ans==-1) {cout << -1;} else {cout << s.size()-ans;}
}