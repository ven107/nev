#include <stdio.h>

int main() {
    
    int x1, y1, x2, y2;
     scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
     double k = (double)(y1 - y2) / (x1 - x2);
    double b = y2 - k * x2;
     printf("%.2f %.2f\n", k, b);
    return 0;
}    
  
    

