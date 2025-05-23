
#include <stdio.h>

int main() {
    int num1, num2, num3;
    
   
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Вычисление среднего арифметического
    double average = (num1 + num2 + num3) / 3.0;
    
    // Вывод результата с двумя знаками после запятой
    printf(" %.2f\n", average);
    
    return 0;
}
