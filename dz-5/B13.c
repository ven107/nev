#include <stdio.h>

int main() {
	
 unsigned int number;
 int even_count = 0;    
 int odd_count = 0;     
  scanf("%u", &number);
  while (number > 0) {
 int digit = number % 10; 
  if (digit % 2 == 0) {
 even_count++; 
 } else {
 odd_count++; 
 }
  number /= 10; 
 }
  printf("%d %d\n", even_count, odd_count);
 
 return 0;
}


