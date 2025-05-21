#include <cstdio>

using namespace std;

int main() {
    char a[101], b[101];
    scanf("%100s%100s", a, b);

    for(int i = 0; a[i] != '\0'; ++i) {
        putchar(((a[i] - '0') ^ (b[i] - '0')) + '0');
    }
    return 0;
}