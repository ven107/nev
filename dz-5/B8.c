#include <stdio.h>

int main() {
    int number;
    int count = 0; 
     scanf("%d", &number);
     
      if (number < 0) {
        number = -number; 
    }
     while (number > 0) {
        if (number % 10 == 9) { 
            count++;
        }
        number /= 10; 
    }
     if (count == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}


