#include <stdio.h>

int binomial_coefficient(int n, int k) {
    int res = 1;
    if (k > n - k) {
        k = n - k;
    }
    for (int i = 0; i < k; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

void pascal_triangle(int n) {
    printf("Pascal's triangle with rows 0 throug %d:\n", n);
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", binomial_coefficient(i, j));
        }
        printf("\n");
    }
    
}

void binomial_expansion(int n) {
    printf("Binomial expansion:\n (a+b)^%d=", n);
    for (int k = 0; k <= n; k++) {
        int coeff = binomial_coefficient(n, k);
        if (k == 0) {
            printf("%d*a^%d*b^%d", coeff, n-k, k);
        } else {
            printf(" + %d*a^%d*b^%d", coeff, n-k, k);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    binomial_expansion(n);
    

    pascal_triangle(n);
    

    
    

    return 0;
}

