#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

const int N=10;

int check_1(string s_1, string s_2) {
    int ans=0;
    for (int i=0; i<s_1.size(); ++i) {ans+=s_1[i]==s_2[i];}
    return ans;
}

int check_2(string s_1, string s_2) {
    int ans=0;
    for (int i=0; i<s_1.size(); ++i) {
        if (find(s_1.begin(), s_1.end(), s_2[i])!=s_1.end()) {++ans;}
    }
    return ans;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<pair<string, pair<int, int>>> arr(n);
    for (int _=0; _<n; ++_) {
        cin >> arr[_].first >> arr[_].second.first >> arr[_].second.second;
    }

    int k=1;
    int total = (1<<N);
    int mask=1;

    set<string> ans;

    for (int i=0; i<total; ++i) {
        string s="";
        for (int j=0; j<N; ++j) {
            if ((i>>j)&mask) {s+=to_string(j);}
        }
        if (s.size()==4) {
            sort(s.begin(), s.end());
            do {
                bool flag=1;
                for (int __=0; __<n && flag; ++__) {
                    int a = check_1(s, arr[__].first);
                    int b = check_2(s, arr[__].first) - a;
                    if (a!=arr[__].second.first || b!=arr[__].second.second) {flag=0;}
                }
                if (flag) {ans.insert(s);}
            } while (next_permutation(s.begin(), s.end()));
        }
    }

    if (ans.size()==1) {cout << *ans.begin();}
    else if (ans.size()==0) {cout << "Incorrect data";}
    else {cout << "Need more data";}

}