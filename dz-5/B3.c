#include <stdio.h>

int main() {
    int a, b,i;
   int sum = 0; 
   scanf("%d %d", &a, &b);
   for ( i = a; i <= b; i++) {
        sum += (int)i * i;  
    }
     printf( "%d\n", sum);
    
    return 0;
}


