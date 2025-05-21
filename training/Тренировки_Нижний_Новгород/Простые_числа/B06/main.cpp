#include <iostream>
#include <algorithm>
#include <bitset>
#include <vector>

using namespace std;

const int N = 100004;
bitset<N> d;
vector<int> prime;

void sieve() {
    for (int i=2; i<N; ++i) {
        if (d[i]==0) {
            prime.push_back(i);
            for (int j=2*i; j<N; j+=i) {
                d[j] = 1;
            }
        }
    }
}

int main() {

    sieve();
    d[0] = d[1] = 1;

    int n, m;
    cin >> n >> m;

    int matrix[n][m];
    int index[n];
    int columns[m];


    for (int _n = 0; _n<n; ++_n) {
        int sum_index = 0;
        for (int _m = 0; _m<m; ++_m) {
            int num;
            cin >> num;

            if (d[num]) {
                int p = *lower_bound(prime.begin(), prime.end(), num);
                matrix[_n][_m] = p-num;
            } else {
                matrix[_n][_m] = 0;
            }

            sum_index += matrix[_n][_m];
        }
        index[_n] = sum_index;
    }

    for (int _m = 0; _m<m; ++_m) {
        int sum_columns = 0;
        for (int _n = 0; _n<n; ++_n) {
            sum_columns += matrix[_n][_m];
        }
        columns[_m] = sum_columns;
    }

    int result = min(*min_element(index, index+n), *min_element(columns, columns+m));
    cout << result;

}

