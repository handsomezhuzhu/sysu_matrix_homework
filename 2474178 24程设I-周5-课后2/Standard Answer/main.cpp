#include <stdio.h>

int main() {
    int password, newPassword;
    int digit1, digit2, digit3, digit4, digit5;

    scanf("%d", &password);

    
    digit1 = password / 10000;             
    digit2 = (password / 1000) % 10;       
    digit3 = (password / 100) % 10;        
    digit4 = (password / 10) % 10;         
    digit5 = password % 10;                

    
    int temp1 = digit1;
    digit1 = digit2;
    digit2 = temp1;    

    int temp2 = digit4;
    digit4 = digit5;
    digit5 = temp2;    

 
    if (digit3 == 9) {
        digit3 = 0;
    } 
    else 
    {
        digit3++;
    }

    
    newPassword = digit1 * 10000 + digit2 * 1000 + digit3 * 100 + digit4 * 10 + digit5;

    
    printf("%.5d\n", newPassword);

    return 0;
}
