#include <stdio.h>

int main() {
    int number;
    int prev_digit = 10; 
    int is_ascending = 1;
    
     scanf("%d", &number);
    
    if (number < 0) {
        number = -number; 
    }
     while (number > 0) {
        int digit = number % 10;
        
      if (digit >= prev_digit) {
            is_ascending = 0; 
            break; 
        }
          prev_digit = digit;
          
          number /= 10; 
    }
    
     if (is_ascending) {
		 
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}


