#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  string s; cin >> s;
  int n=s.size();
  
  int ans=0;
  int start=1;
  for (int i=0; i<n; ++i) {
    int local_ans_1=max((s[i]-'a'+1), start)-min((s[i]-'a'+1), start);
    int local_ans_2=27-max((s[i]-'a'+1), start)+min((s[i]-'a'+1), start)-1; 
    ans+=min(local_ans_1, local_ans_2);
    start=s[i]-'a'+1;
  }
  cout << ans;
}