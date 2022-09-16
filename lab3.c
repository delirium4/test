#include <stdio.h>
int main() {
    int num1;
    int num2;
    int num3;
    printf("Insert your number in 16th ns: ");
    scanf("%x",&num1);
    printf("Insert your number in 8th ns: ");
    scanf("%o",&num2);
    printf("%o\n",num2);
    printf("%o\n",num1);
    int num1sdv = num1 << 3;
    printf("%o\n",num1sdv);
    int num1otr = ~num1;
    printf("%o %o\n",num1,num1otr);
    printf("Insert your number in 8th ns: ");
    scanf("%o",&num3);
    num3 = num3 ^ num1;
    printf("%o",num3);
    return 0;
}

