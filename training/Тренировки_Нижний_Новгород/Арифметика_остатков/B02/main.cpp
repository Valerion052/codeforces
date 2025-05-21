#include <iostream>
#include <map>

using namespace std;

map<int, int> d2 = {{1, 2}, {2, 4}, {3, 3}, {0, 1}};
map<int, int> d3 = {{1, 3}, {2, 4}, {3, 2}, {0, 1}};

int gcd (string k) {
    int ans = 0;
    for (int i=0; i<k.size(); ++i) {
        ans = (ans*10 + (k[i] - '0'))%4;
    }
    return ans;
}


int main() {

    string s;
    cin >> s;

    int g = gcd(s);
    int _2 = d2[g];
    int _3 = d3[g];
    int ans = (1+(_2*(1+_2))%5+_3)%5; 
    cout << ans;
    
}