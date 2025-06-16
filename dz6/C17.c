#include <stdio.h>


    int is_happy_number(int n) {
    int sum = 0;
    int a = 1;
    
     while (n > 0) {
     int digit = n % 10;
     sum += digit;
       a *= digit;
       n /= 10;
    }
    return sum == a;
}

int main() {
    int a;
    scanf("%d", &a);
    
    if (is_happy_number(a))
    
        printf("YES\n");
    else
        printf("NO \n");
    
    return 0;
}


