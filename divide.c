#include <stdio.h>
int main() {    

    float number1, number2, div;
    
    printf("Enter two integers: ");
    scanf("%f %f", &number1, &number2);

    div = number1 % number2;      
    
    printf("%f % %f = %f", number1, number2, div);
    return 0;
}