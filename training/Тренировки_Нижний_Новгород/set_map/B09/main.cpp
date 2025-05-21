#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

pair<string, string> address_parsing(string s) {

    string local_host, path;
    
    string address = s.substr(7, s.size());
    int slash = address.find('/');

    if (slash==string::npos) {
        local_host = address.substr(0, address.size());
        path = "000";
    } else {
        local_host = address.substr(0, slash);
        path = address.substr(slash, address.size());
    }
    return {local_host, path};
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;

    map<string, set<string>> dict, dict_path;

    for (int i=0; i<n; ++i) {
        string s;
        cin >> s;

        auto address = address_parsing(s);
        dict[address.first].insert(address.second);
    }

    int counter = 0;

    for (auto x: dict) {

        string long_path = "";

        for (auto y: x.second) {long_path += y + ' ';}

        dict_path[long_path].insert(x.first);

        if (dict_path[long_path].size()==2) {++counter;}
    }

    if (counter==0) {cout << 0;}
    else {
        cout << counter << '\n';
        for (auto c: dict_path) {
            if (c.second.size() >= 2) {
                for (auto d: c.second) {
                    cout << "http://" << d << ' ';
                }
                cout << '\n';
            }
        }
    }
}
