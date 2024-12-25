#include <stdio.h>

long long Pow(int a, int b) {
    if (b == 0) return 1;
    if (a == 0) return 0;

    long long res = 1;
    while (b--) {
        res *= a;
    }
    return res;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%lld", Pow(a, b));

    return 0;
}