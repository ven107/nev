#include <stdio.h>

int main() {
    int number;
    int all_even = 1; 
    
    scanf("%d", &number);
    
   if (number < 0) {
        number = -number;
    }
     while (number > 0) {
        int digit = number % 10; 
         if (digit % 2 != 0) {
            all_even = 0; 
            break; 
        }
        
        number /= 10;
    }
     if (all_even) {
		 
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}


