# include <stdio.h>

int main() {
    int number;
   
    scanf("%d", &number);
    int sum = number / 100 + (number / 10) % 10 + number % 10;
    printf("%d\n", sum);
   
     return 0;   
}
    
  


    




