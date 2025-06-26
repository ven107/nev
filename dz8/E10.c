#include <stdio.h>

int main() {
    int arr[12]; 
    int shift = 4; 
    int i;
   for( i = 0; i < 12; i++) {
     scanf("%d", &arr[i]);
    }
     for( i = 0; i < 12; i++) {
     printf("%d ", arr[(i + 12 - shift) % 12]);
    }
    printf("\n");
    
    return 0;
}


