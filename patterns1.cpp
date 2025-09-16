#include <stdio.h>

int n = 7;

void printH(int i, int j) {
    printf((j == 0 || j == n - 1 || i == n / 2) ? "*" : " ");
}
void printA(int i, int j) {
    printf(((i == 0 && j > 0 && j < n - 1) || (j == 0 && i > 0) ||
            (j == n - 1 && i > 0) || i == n / 2) ? "*" : " ");
}
void printM(int i, int j) {
    printf((j == 0 || j == n - 1 || (i == j && j <= n / 2) ||
            (i + j == n - 1 && j >= n / 2)) ? "*" : " ");
}
void printS(int i, int j) {
    printf((i == 0 || i == n / 2 || i == n - 1 ||
            (i < n / 2 && j == 0) || (i > n / 2 && j == n - 1)) ? "*" : " ");
}

int main() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printH(i, j);
        printf("  ");
        for (int j = 0; j < n; j++) printA(i, j);
        printf("  ");
        for (int j = 0; j < n; j++) printM(i, j);
        printf("  ");
        for (int j = 0; j < n; j++) printS(i, j);
        printf("  ");
        for (int j = 0; j < n; j++) printA(i, j);
        printf("\n");
    }
    return 0;
}
