#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long int values_1 = 1, values_2 = 1;

    int arr[21] = {2, 5, 10, 12, 15, 20, 22, 25, 30, 32, 35, 40, 42, 45, 50, 52, 55, 60, 62, 65, 70};

    long long value = 1;

    for (int i=0; i<21; ++i) {

        value *= arr[i];

        cout << arr[i] << " -- " << value << endl;

    }
}