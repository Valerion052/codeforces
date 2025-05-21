#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, pair<int, int>> counter;

    for (int i=0; i<n; ++i) {
        int x, y;
        cin >> x >> y;

        if (counter.find(x) == counter.end()) {
            counter[x].first = 1;
            counter[x].second = 1;
            }
        else {
            ++counter[x].first;
            ++counter[x].second;
        }

        if (counter.find(y) == counter.end()) {
            counter[y].first = 1;
            counter[y].second = 0;
        }
        else if (x != y) {
            ++counter[y].first;
        }
    }

    int result = n+1;
    
    int need_value = n/2;
    if (n%2!=0) {++need_value;}

    for (auto& j: counter) {

        int value = need_value - j.second.second;

        if (value<=0) {result = 0; break;}
        else {
            if (value <= j.second.first-j.second.second) {
                result = min(value, result);
            }
        }
    }
    if (result==n+1) {result = -1;}

    cout << result;
}