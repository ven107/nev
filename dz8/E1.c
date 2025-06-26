#include <stdio.h>

float average(int arr[], int size) {
    int sum = 0; 
    int i;
    
    for( i = 0; i < size; i++) {
        sum += arr[i];  
    }
     return (float)sum / size;
}
int main() {
    int arr[5];  
    int size = 5; 
    int i;
    
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%.3f\n", average(arr, size));
     return 0;
}


