#include <stdio.h>

int main() {
    int number, last_digit;
     scanf("%d", &number);
    last_digit = number % 10;
    number /= 10;
    
    while (number) {
        if (last_digit == number % 10) {
            printf("YES\n");
            return 0;
        }
        last_digit = number % 10;
        number /= 10;
    }
    
    printf("NO\n");
    return 0;
}


