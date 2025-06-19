#include <stdio.h>

int acounter() {
    int count = 0;
    char ch;
    ch = getchar();
    
   if (ch == '.') {
        return 0;
    }
     if (ch == 'a') {
        count = 1;
    }
     return count + acounter();
}
int main() {
  
    printf("%d\n", acounter());
    
    return 0;
}


