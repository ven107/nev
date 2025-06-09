#include <stdio.h>

int main() {
 unsigned int number;
 int min_digit = 9; 
 int max_digit = 0; 
 
 scanf("%u", &number);
 
 while (number > 0) {
 int digit = number % 10; 
 
 if (digit < min_digit) {
 min_digit = digit;
 }
 if (digit > max_digit) {
 max_digit = digit;
 }
 
 number /= 10;
 }
  printf("%d %d\n", min_digit, max_digit);
 
 return 0;
}


