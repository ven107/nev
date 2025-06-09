#include <stdio.h>

int main() {
    unsigned int number, reversed = 0;
     scanf("%u", &number);
     while (number > 0) {
        reversed = reversed * 10 + number % 10; 
        number /= 10; 
    }
    printf("%u\n", reversed);
    
    return 0;
}


