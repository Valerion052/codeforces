#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> arr_n_1, arr_n_2;
    for (int i=0; i<n; ++i) {
        int n_1, n_2;
        cin >> n_1 >> n_2;
        arr_n_1.insert(n_1);
        arr_n_2.insert(n_2);
    }

    int m;
    cin >> m;
    set<int> arr_m_1, arr_m_2;
    for (int j=0; j<m; ++j) {
        int m_1, m_2;
        cin >> m_1 >> m_2;
        arr_m_1.insert(m_1);
        arr_m_2.insert(m_2);
    }

    int value_1 = *arr_m_1.rbegin() - *arr_n_2.begin();
    int value_2 = *arr_n_1.rbegin() - *arr_m_2.begin();

    cout << max(max(value_1, value_2), 0);
}
