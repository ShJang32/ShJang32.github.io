#include <stdio.h>

int main() {
    int num1, num2;
    int five, four, three;

    scanf("%d %d", &num1, &num2);
    
    five = (num2 / 100);
    four = (num2 - five*100) / 10 ;
    three = num2 % (five*100 + four*10);
    
    printf("%d\n", num1*three);
    printf("%d\n", num1*four);
    printf("%d\n", num1*five);
    printf("%d\n", num1 * num2);
    return 0;
}