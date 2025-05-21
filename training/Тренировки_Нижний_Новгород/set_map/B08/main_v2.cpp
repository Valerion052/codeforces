#include <iostream>
#include <vector>
#include <set>

using namespace std;

int a[200000]; // объемы сосудов
int cur[200000]; // текущее количество воды

int main() {
    set<int> s;
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(i);
    }

    int m;
    cin >> m;
    
    for (int i = 0; i < m; i++) {
        int t, id;
        cin >> t >> id;
        id--;
        if (t == 1) {
            int x;
            cin >> x; // количество добавленной воды

            auto it = s.lower_bound(id);
            vector<int> del; // список сосудов для "удаления"
            
            while (it != s.end()) {
                int id = *it; // текущий незаполненный сосуд
                int r = a[id] - cur[id]; // свободное место в нем
                
                if (r > x) {
                    cur[id] += x;
                    break;
                }
                else {
                    // сосуд заполнен
                    cur[id] += r;
                    del.push_back(id);
                    x -= r;
                    it++;
                }
            }
            
            for (int id : del) {
                s.erase(id); // удаляем заполненные сосуды
            }
        }
        else {
            cout << cur[id] << "\n";
        }
    }
}