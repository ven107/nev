#include <stdio.h>

int main() {
    int a, b;
    int i;
    scanf("%d %d", &a, &b);
    for ( i = a; i <= b; i++) {
        printf("%d\t",  i * i);
    }    
       printf("\n");
     return 0;
}




