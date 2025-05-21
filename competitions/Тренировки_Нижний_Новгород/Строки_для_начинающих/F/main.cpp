#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int A = count(s.begin(), s.end(), 'A');
    int D = count(s.begin(), s.end(), 'D');

    if (A==D) {cout << "Friendship";}
    else if (A>D) {cout << "Anton";}
    else {cout << "Danik";}


}