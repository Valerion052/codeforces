#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

long long coordinate(int x, int y) {
    return x*10000+y;
}

bool filter(pair<int, int> x, pair<int, int> y) {
    if (x.first == y.first) {return x.second < y.second;}
    return x.first < y.first;
}


vector<long long> check(20002001);

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> coordinates;

    for (int i=0; i<n; ++i) {
        int x, y;
        cin >> x >> y;
        coordinates.push_back({x+1000, y+1000});
        ++check[coordinate(x+1000, y+1000)];
    }

    sort(coordinates.begin(), coordinates.end(), filter);

    int result = 0;

    for (int j=0; j<n-1; ++j) {
        for (int k=j+1; k<n; ++k) {

            int x_middle = coordinates[j].first+coordinates[k].first;
            int y_middle = coordinates[j].second+coordinates[k].second;
            
            if (x_middle%2==0 && y_middle%2==0) {
                if (check[coordinate(x_middle/2, y_middle/2)]) {++result;}
            }
        }
    }
    cout << result;

}