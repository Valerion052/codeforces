#include <iostream>
#include <vector>
#include <bitset>
#include <unordered_set>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Генерируем простые числа до n + 100 (с запасом)
    vector<int> primes;
    vector<bool> is_prime(n + 100, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n + 100; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i + i; j <= n + 100; j += i) {
                is_prime[j] = false;
            }
        }
    }

    int max_k = 20; // Максимальное количество вопросов
    int min_k = ceil(log2(n)); // Минимально необходимое количество вопросов

    for (int k = min_k; k <= max_k && k <= primes.size(); ++k) {
        vector<int> y_list;
        for (int i = 0; i < k; ++i) {
            y_list.push_back(primes[i]);
        }
        vector<bitset<64>> patterns(n + 1);
        for (int x = 1; x <= n; ++x) {
            bitset<64> bs;
            for (int i = 0; i < k; ++i) {
                if (x % y_list[i] == 0) {
                    bs.set(i);
                }
            }
            patterns[x] = bs;
        }
        unordered_set<uint64_t> unique_patterns;
        for (int x = 1; x <= n; ++x) {
            unique_patterns.insert(patterns[x].to_ullong());
        }
        if (unique_patterns.size() == n) {
            cout << k << '\n';
            for (int y : y_list) {
                cout << y << ' ';
            }
            cout << '\n';
            return 0;
        }
    }

    // Если не удалось с простыми числами до max_k, пробуем добавить составные числа
    vector<int> nums;
    for (int i = 2; i <= n; ++i) {
        nums.push_back(i);
    }
    // Ограничим k значением 60, чтобы избежать превышения лимита времени
    int max_k_compound = min(n, 60);
    for (int k = min_k; k <= max_k_compound; ++k) {
        vector<int> y_list;
        for (int i = 0; i < k; ++i) {
            y_list.push_back(nums[i]);
        }
        vector<bitset<64>> patterns(n + 1);
        for (int x = 1; x <= n; ++x) {
            bitset<64> bs;
            for (int i = 0; i < k; ++i) {
                if (x % y_list[i] == 0) {
                    bs.set(i);
                }
            }
            patterns[x] = bs;
        }
        unordered_set<bitset<64>> unique_patterns;
        for (int x = 1; x <= n; ++x) {
            unique_patterns.insert(patterns[x]);
        }
        if (unique_patterns.size() == n) {
            cout << k << '\n';
            for (int y : y_list) {
                cout << y << ' ';
            }
            cout << '\n';
            return 0;
        }
    }

    // Если не удалось найти решение, выводим все числа от 2 до n в качестве y_i
    cout << n << '\n';
    for (int y = 2; y <= n + 1; ++y) {
        cout << y << ' ';
    }
    cout << '\n';

    return 0;
}
