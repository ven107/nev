#include <stdio.h>

int main() {
    int number, digit;
    int sum = 0;
    
    scanf("%d", &number);
     while (number > 0) {
        digit = number % 10;  
        sum += digit;         
        number /= 10;       
    }
     if (sum == 10) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
 

