#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define M_PI 3.14159265358979323846

double Num1, Num2, Res;
char Op;

int factorial(double value) {
    int fact = 1;
    if(value == 0) {
        return fact;
    }
    value = (int)value;
    while(value > 0) {
        fact *= value;
        value--;
    }
    return fact;
}

double randf(double val1, double val2) {
    if(val1 == val2) {
        return val1;
    }
    double temp;
    if(val1 > val2) {
        temp = val2;
        val2 = val1;
        val1 = temp;
    }
    return val1 + ((float)rand() / RAND_MAX) * (val2 - val1);
}

int prime(double value) {
    value = (int)value;
    if(value < 2) {
        return 0;
    }
    if(value == 2) {
        return 1;
    }
    int temp = value;
    for(int i = 2; i < sqrt(value); i++) {
        if((temp % i) == 0) {
            return 0;
        }
    }
    return 1;
}

int gcd(double val1, double val2) {
    int temp1 = (int)val1;
    int temp2 = (int)val2;
    if(val1 == val2) {
        return val1;
    }
    int temp, reminder;
    if(temp1 < temp2) {
        temp = temp2;
        temp2 = temp1;
        temp1 = temp;
    }
    while (reminder > 0) {
        reminder = temp1 % temp2;
        temp1 = temp2;
        temp2 = reminder;
    }
    return temp1;
}

int lcm(double val1, double val2) {
    return ((int)val1 * (int)val2) / gcd(val1, val2);
}

int main() {
    srand(time(NULL));
    printf("========================\n       CALCULATOR       \n========================\n\nEnter first number: ");
    scanf("%lf", &Num1);

    printf("\n========== OPERATORS ==========\n\nBasic:\n  +  Addition\n  -  Subtraction\n  *  Multiplication\n  /  Division\n  %%  Modulo\n\nPowers & Roots:\n  ^  Power\n  r  Square root\n  s  Square\n  c  Cube\n\nOther:\n  !  Factorial\n  |  Absolute value\n  @  Percentage\n\nRounding:\n  f  Floor\n  h  Ceiling\n  n  Round\n\nAdvanced:\n  C  Combination\n  P  Permutation\n  m  Minimum\n  M  Maximum\n  ?  Random number\n  p  Prime check\n  g  GCD\n  l  LCM\n\nTrigonometry:\n  t  sinus\n  u  cosinus\n  v  tangent\n  S  arcsinus\n  A  arcosinus\n  T  arctangent\n\nExponential:\n  e  exponential\n  E  exp base-10\n  L  ln\n  o  log\n\n===============================\n");

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
                Res = lcm(Num1, Num2);
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