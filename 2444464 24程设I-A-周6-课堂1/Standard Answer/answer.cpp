#include <stdio.h>
#define BETA 0.9


int main() {
    int input;
    double ema = 0;
    bool is_first = 1;
    
    while (1) {
        scanf("%d", &input);
        
        if (input == 0) {
            break;
        } 
        
        if (is_first) {
            ema = input;
            is_first = 0;
        } else {
            ema = (1-BETA) * input + BETA * ema;
        }
    }
    printf("%.2f", ema);
    return 0;
}