#include <stdio.h>

int main() {
    int n, i, sum, prod, digit;
    scanf("%d", &n);
     for (i = 10; i <= n; i++) {
        sum = 0;
        prod = 1;
        int temp = i;
        while (temp > 0) {
            digit = temp % 10;
            sum += digit;
            prod *= digit;
            temp /= 10;
        }
         if (sum == prod) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}


