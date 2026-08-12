#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
double Num1, Num2, Res;
char Op;

int factorial(double x) {
    int f = 1;
    if(x == 0) {
        return f;
    }
    int t = (int)x;
    while(t > 0) {
        f *= t;
        t--;
    }
    return f;
}

double randf(double x, double y) {
    if(x == y) {
        return x;
    }
    double t1, t2;
    if(x < y) {
        t1 = x;
        t2 = y;
    } else {
        t1 = y;
        t2 = x;
    }
    return t1 + ((float)rand() / RAND_MAX) * (t2 - t1);
}

int prime(double x) {
    int t = (int)x;
    if(t < 2) {
        return 0;
    }
    if(t == 2) {
        return 1;
    }
    for(int i = 2; i < sqrt(x); i++) {
        if((t % i) == 0) {
            return 0;
        }
    }
    return 1;
}

int gcd(double x, double y) {
    if(x == y) {
        return x;
    }
    int t1, t2, r;
    if(x > y) {
        t1 = (int)x;
        t2 = (int)y;
    } else {
        t1 = (int)y;
        t2 = (int)x;
    }
    while (r > 0) {
        r = t1 % t2;
        t1 = t2;
        t2 = r;
    }
    return t1;
}

int main() {
    srand(time(NULL));
    printf("========================\n       CALCULATOR       \n========================\n\n");
    printf("Enter first number: ");
    scanf("%lf", &Num1);
    printf("Enter operator: ");
    scanf(" %c", &Op);
    if(Op != '|' && Op != 'r' && Op != 's' && Op != 'c' && Op !='!' && Op != 'f' && Op != 'h' && Op != 'n' && Op != 'p') {
        printf("Enter second number: ");
        scanf("%lf", &Num2);
    }

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

        case '%':
            if(Num1 == (int)Num1 && Num2==(int)Num2){
                if(Num2 == 0) {
                    printf("Math error");
                    return 1;
                }
                int int1 = (int)Num1;
                int int2 = (int)Num2;
                Res = int1 % int2;
            } else {
                printf("Math error");
                return 1;
            }
            break;   

        case '^':
            if(Num1 == 0 && Num2 == 0) {
                printf("Math error");
                return 1;
            }
            Res = pow(Num1, Num2);
            break;

        case 'r':
            if(Num1 < 0) {
                printf("Math error");
                return 1;
            }
            Res = sqrt(Num1);
            break;

        case 's':
            Res = pow(Num1, 2);
            break;

        case 'c': 
            Res = pow(Num1, 3);
            break;

        case '!':
            if(Num1 > 0 && Num1 == (int)Num1) {
                Res = factorial(Num1);
            } else {
                printf("Math error");
                return 1;
            }
            break;

        case '|':
            Res = fabsf(Num1);
            break;

        case '@':
            Res = (Num1 * Num2) / 100;
            break;

        case 'f':
            Res = floor(Num1);
            break;

        case 'h':
            Res = ceil(Num1);
            break;

        case 'n':
            Res = round(Num1);
            break;

        case 'm':
            if(Num1 < Num2) {
                Res = Num1;
            } else {
                Res = Num2;
            }
            break;

        case 'M':
            if(Num1 > Num2) {
                Res = Num1;
            } else {
                Res= Num2;
            }
            break;
        
        case '?':
            if (Num1 == Num2) {
                Res = Num1;
            } else {
                Res = randf(Num1, Num2);
            }
            break;

        case 'p':
            if(Num1 == (int)Num1) {
                Res = prime(Num1);
            } else {
                printf("Math error");
                return 1;
            }
            break;
            
        case 'g':
            if(Num1 == (int)Num1 && Num2 == (int)Num2) {
                Res = gcd(Num1, Num2);
            } else {
                printf("Math error");
                return 1;
            }
            break;

        case 'l':
            if(Num1 == (int)Num1 && Num2 == (int)Num2) {
                Res = (Num1 * Num2) / gcd(Num1, Num2);
            } else {
                printf("Math error");
                return 1;
            }
            break;  
        
        default:
            printf("Syntax error");
            return 1;
            break;
    }
    printf("Result: %lf", Res);

    return 0;
}