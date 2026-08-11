#include <stdio.h>
double Num1, Num2, Res;
char Op;

int main() {
    printf("========================\n       CALCULATOR       \n========================\n\n");
    printf("Enter first number: ");
    scanf("%lf", &Num1);
    printf("Enter operator: ");
    scanf(" %c", &Op);
    printf("Enter second number: ");
    scanf("%lf", &Num2);

    switch(Op) {
        case '+':
            Res = Num1 + Num2;
            break;

        case '-':
            Res = Num1 - Num2;
            break;

        case '*':
            Res = Num1 * Num2;
            break;

        case '/':
            if(Num2 == 0) {
                printf("Math error");
                return 1;
            }
            Res = Num1 / Num2;
            break;

        default:
            printf("Syntax error");
            return 1;
            break;
    }
    printf("Result: %lf", Res);

    return 0;
}