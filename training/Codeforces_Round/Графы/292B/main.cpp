#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> arr(n+1, 0);
    for (int i=0; i<m; ++i) {
        int x, y;
        cin >> x >> y;
        ++arr[x];
        ++arr[y];
    }

    map<int, int> check;
    for (auto j: arr) {++check[j];}

    int flag = 1;
    if (check[0]==1) {check.erase(0);}
    else {flag=0;}

    if (flag!=0) {
        if (check.size()>2) {flag=0;}
        else {
            if (check.size()==1) {
                if (check.count(2)) {
                    if (check[2]==n) {flag = 1;}
                    else {flag=0;}
                }
                else {flag=0;}
            }
            else {
                if (check.count(1)) {
                    if (check.count(2)) {
                        if(check[1]==2 && check[2]==n-2) {flag=2;}
                        else {flag=0;}
                    }
                    else {
                        auto it = check.end(); --it;
                        if((*it).second==1) {
                            if ((*it).first == n-1) {flag=3;}
                            else {flag=0;}
                        }
                        else {flag=0;}
                    }
                }
                else {flag=0;}
            }
        }

    }

    if (flag==1) {cout << "ring topology";}
    else if (flag==2) {cout << "bus topology";}
    else if (flag==3) {cout << "star topology";}
    else {cout << "unknown topology";}
    

}