
#include <stdio.h>

int main() { //найти максимальное число//
    int num;
    int max = 0;

    scanf("%d", &num);

    while (num) {
        int buf = num % 10;            
        max = (buf > max) ? buf : max;
        num /= 10;                    
    }

    printf("%d\n", max);
    return 0;
}


   

 
  

