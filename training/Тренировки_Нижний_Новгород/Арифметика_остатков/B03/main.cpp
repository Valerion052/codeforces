#include <iostream>
#include <map>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        map<int, int> dict;
        for (int i=0; i<n; ++i) {
            int num;
            cin >> num;
            ++dict[num%10];
        }

        bool flag = false;

        for (auto x: dict) {
            if (flag) {break;}
            for (auto y: dict) {
                if (flag) {break;}
                if (x.first == y.first && y.second==1) {continue;}
                for (auto z: dict) {
                    if (flag) {break;}
                    if (x.first == z.first && z.second==1) {continue;}
                    if (y.first == z.first && z.second==1) {continue;}
                    if (x.first == z.first && y.first == z.first && z.second<3) {continue;}
                    if ((x.first+y.first+z.first)%10==3) {flag=true;}
                }
            }
        }

        if (flag) {cout << "YES\n";} else {cout << "NO\n";}

    }
}

