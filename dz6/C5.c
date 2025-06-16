#include <stdio.h>

int sum_n(int N) {
    return N * (1 + N) / 2;
}

int main() {
    int N;
     scanf("%d", &N);
    int result = sum_n(N);
    printf("%d\n",  result);
    
    return 0;
}



