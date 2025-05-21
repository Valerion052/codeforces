#include <iostream>
#include <vector>

using namespace std;

const int N=4;
const int _N=3;
vector<long long> d(N);
char sign[_N];
bool mask[N]{};
long long ans=1e18;


void solve(vector<long long> num, int k) {

    if (k==_N) {ans=min(ans, num[0]); return;}
    for (int i=0; i<num.size(); ++i) {
        for (int j=i+1; j<num.size(); ++j) {
            
            long long result;
            if (sign[k]=='+') {result = num[i] + num[j];}
            else {result = num[i] * num[j];}

            vector<long long> next;
            for (int k = 0; k<num.size(); k++) {
                if (k != i && k != j) {next.push_back(num[k]);}
            }
            next.push_back(result);
            solve(next, k+1);
        }
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> d[0] >> d[1] >> d[2] >> d[3];
    cin >> sign[0] >> sign[1] >> sign[2];


    solve(d, 0);
    cout << ans;

}