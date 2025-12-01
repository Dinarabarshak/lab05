#include <stdio.h>

int main() {
    int n, m;
    long long result = 1;

    printf("Введіть n: ");
    scanf("%d", &n);

    printf("Введіть m: ");
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        result *= n;
    }

    printf("Результат: %lld\n", result);
    return 0;
}
