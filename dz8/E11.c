#include <stdio.h>

int main() {
    int arr[10];
    int i,j;
   
    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9 - i; j++) {
            if((arr[j] % 10) > (arr[j+1] % 10)) {
               
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
      for( i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}


