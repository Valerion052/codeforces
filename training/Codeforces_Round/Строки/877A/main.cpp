#include <iostream>

using namespace std;

string s;

int check_name(string name) {
    int ans=0;
    int n=name.size();
    if (n>s.size()) {return 0;}

    for (int i=0; i<s.size(); ++i) {
        if (s.substr(i, n)==name) {++ans;}
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> s;

    string check[5] = {"Danil", "Olya", "Slava", "Ann", "Nikita"};
    int flag=0;
    
    for (string x: check) {flag+=check_name(x);}
    if (flag==1) {cout << "YES\n";} else {cout << "NO\n";}
}