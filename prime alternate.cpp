#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int low, high, count = 0;
    scanf("%d %d", &low, &high);
    for (int i = low; i <= high; i++) {
        if (isPrime(i)) {
            if (count % 2 == 0)
                printf("%d ", i);
            count++;
        }
    }
    printf("\n");
    return 0;
}
