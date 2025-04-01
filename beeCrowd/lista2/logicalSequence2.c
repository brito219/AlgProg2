#include <stdio.h>
 
int main() {
 
    int X, Y;
    
    scanf("%d", &X);
    scanf("%d", &Y);
    
    for(int i = 1; i <= Y; i++) {
        printf("%d", i);
        
        if (i % X != 0 && i != Y){
            printf(" ");
        } else {
            printf("\n");
        }
    }
     
 
    return 0;
}