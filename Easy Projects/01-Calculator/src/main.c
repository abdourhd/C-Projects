#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define M_PI 3.14159265358979323846
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
 
    printf("\n========== OPERATORS ==========\n");

    printf("\nBasic:\n");
    printf("  +  Addition\n");
    printf("  -  Subtraction\n");
    printf("  *  Multiplication\n");
    printf("  /  Division\n");
    printf("  %%  Modulo\n");

    printf("\nPowers & Roots:\n");
    printf("  ^  Power\n");
    printf("  r  Square root\n");
    printf("  s  Square\n");
    printf("  c  Cube\n");

    printf("\nOther:\n");
    printf("  !  Factorial\n");
    printf("  |  Absolute value\n");
    printf("  @  Percentage\n");

    printf("\nRounding:\n");
    printf("  f  Floor\n");
    printf("  h  Ceiling\n");
    printf("  n  Round\n");

    printf("\nAdvanced:\n");
    printf("  C  Combination\n");
    printf("  P  Permutation\n");
    printf("  m  Minimum\n");
    printf("  M  Maximum\n");
    printf("  ?  Random number\n");
    printf("  p  Prime check\n");
    printf("  g  GCD\n");
    printf("  l  LCM\n");

    printf("\nTrigonometry:\n");
    printf("  t  sinus\n");
    printf("  u  cosinus\n");
    printf("  v  tangent\n");
    printf("  S  arcsinus\n");
    printf("  A  arcosinus\n");
    printf("  T  arctangent\n");

    printf("\nExponential:\n");
    printf("  e  exponential\n");
    printf("  E  exp base-10\n");
    printf("  L  ln\n");
    printf("  o  log\n");

    printf("\n===============================\n");

    printf("Enter first number: ");
    scanf("%lf", &Num1);
    printf("Enter operator: ");
    scanf(" %c", &Op);
    if(Op != '|' && Op != 'r' && Op != 's' && Op != 'c' && Op !='!' && Op != 'f' && Op != 'h' && Op != 'n' && Op != 'p' && Op != 't' && Op != 'u' && Op != 'v' && Op != 'S' && Op != 'A' && Op != 'T' && Op != 'e' && Op != 'E' && Op != 'L' && Op != 'o') {
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

        case 't':
            Res = sin((Num1 * M_PI) / 180);
            break;

        case 'u':
            Res = cos((Num1 * M_PI) / 180);
            break;
            
        case 'v':
            Res = tan((Num1 * M_PI) / 180);
            break;

        case 'S':
            if (Num1 < -1 || Num1 > 1) {
                printf("Math error");
                return 1;
            } 
            Res = asin((Num1 * M_PI) / 180);
            break;

        case 'A':
            if (Num1 < -1 || Num1 > 1) {
                printf("Math error");
                return 1;
            } 
            Res = acos((Num1 * M_PI) / 180);
            break;

        case 'T':
            Res = atan((Num1 * M_PI) / 180);
            break;

        case 'C':
            if(Num1 == (int)Num1 && Num2 == (int)Num2) {
                int int1;
                int int2;
                if(Num1 > Num2) {
                    int1 = (int)Num1;
                    int2 = (int)Num2;
                } else {
                    int1 = (int)Num2;
                    int2 = (int)Num1;
                }
                Res = factorial(int1) / (factorial(int2) * factorial(int1-int2));
            } else {
                printf("Math error");
                return 1;
            }
            break;
        
        case 'P':
            if(Num1 == (int)Num1 && Num2 == (int)Num2) {
                int int1;
                int int2;
                if(Num1 > Num2) {
                    int1 = (int)Num1;
                    int2 = (int)Num2;
                } else {
                    int1 = (int)Num2;
                    int2 = (int)Num1;
                }
                Res = factorial(int1) / factorial(int1-int2);
            } else {
                printf("Math error");
                return 1;
            }
            break;

        case 'e':
            Res = exp(Num1);
            break;

        case 'E':
            Res = pow(10, Num1);
            break;

        case 'L':
            if(Num1 <= 0) {
                printf("Math error");
                return 1;
            }
            Res = log(Num1);
            break;

        case 'o':
            if(Num1 <= 0) {
                printf("Math error");
                return 1;
            }
            Res = log(Num1) / log(10);
            break;
        
        default:
            printf("Syntax error");
            return 1;
            break;
    }
    printf("Result: %lf", Res);

    return 0;
}