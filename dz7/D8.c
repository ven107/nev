#include <stdio.h>

void print_numbers(int a, int b) {
  
    if (a == b) {
        printf("%d ", a);
    }
 
    else if (a < b) {
        printf("%d ", a);
    
        print_numbers(a + 1, b);
    }
   
    else {
        printf("%d ", a);
       
        print_numbers(a - 1, b);
    }
}
int main() {
    int a, b;
     scanf("%d %d", &a, &b);
     print_numbers(a, b);
    
    return 0;
}


