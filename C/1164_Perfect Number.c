#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        int sum = 0;

        // Check divisors up to n/2
        for (int j = 1; j <= n / 2; j++) {
            if (n % j == 0) {   // Only add divisors
                sum += j;
            }
        }

        if (sum == n) {
            printf("%d eh perfeito\n", n);
        } else {
            printf("%d nao eh perfeito\n", n);
        }
    }

    return 0;
}
