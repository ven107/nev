#include <stdio.h>



int middle(int a, int b) {
    return (a + b) / 2;
}

int main() {
    int a,b;
     scanf("%d%d", &a,&b);
  
     int result = middle(a,b);
    printf("%d\n", result);
    
    return 0;
}
