
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define PI 3.14159265
#define MAX 100
char history;


float add(float a, float b) 
{
    return a + b;
}

float minus(float a, float b) 
{
    return a - b;
}

float multiply(float a, float b) 
{
    return a * b;
}

float divide(float a, float b) 
{
    return a / b;
}

float mod(float a, float b) 
{
    return remainderf(a, b);
}

float sine(float x) 
{
    return sinf(x * PI / 180);
}

float cosine(float x) 
{
    return cosf(x * PI / 180);
}

float tangent(float x) 
{
    return tanf(x);
}

float sineh(float x) 
{
    return sinhf(x);
}



float cosineh(float x) 
{
    return coshf(x);
}

float tangenth(float x) 
{
    return tanhf(x);
}

float logten(float x) 
{
    return log10f(x);
}

float squareroot(float x) 
{
    return sqrtf(x);
}

float exponent(float x) 
{
    return expf(x);
}

float power(float x, float y) 
{
    return powf(x, y);
}

void historypush(float answer) 
{
    char final[MAX];
    gcvt(answer, MAX, final);
    strcat(&history, final);
    strcat(&history, "\n");
}

int main(void) 
{

    int n;
    float num1, num2, answer;
    printf("\n What operation do you want to perform? \n");
    printf("1.addition 2.subtraction 3.multiplication 4.division 5.modulus 6.power \n");
    printf("7.sin 8.cos 9.tan 10.sinh 11.cosh 12.tanh 13.1og10 14.square root. 15.exponent \n");
    printf("16.history 17.exit \n");
    printf("Input:");
    scanf("%d", &n);

    if (n > 0 && n < 7) 
{
        printf("Enter first number :");
        scanf("%f", &num1);
        printf("Enter second number :");
        scanf("%f", &num2);
        switch (n) 
{
            case 1:
                answer = add(num1, num2);
                break;
            case 2:
                answer = minus(num1, num2);
                break;
            case 3:
                answer = multiply(num1, num2);
                break;
            case 4:
                answer = divide(num1, num2);
                break;
            case 5:
                answer = mod(num1, num2);
                break;
            case 6:
                answer = power(num1, num2);
                break;
            default:
                return 0;
        }
        historypush(answer);
        printf("The output of the operation is: %f\n", answer);
    }
 else if (n >= 7 && n <= 15) {
        printf("Enter a number :");
        scanf("%f", &num1);
        switch (n) 
{
            case 7:
                answer = sine(num1);
                break;
            case 8:
                answer = cosine(num1);
                break;
            case 9:
                answer = tangent(num1);
                break;
            case 10:
                answer = sineh(num1);
                break;
            case 11:
                answer = cosineh(num1);
                break;
            case 12:
                answer = tangenth(num1);
                break;
            case 13:
                answer = logten(num1);
                break;
            case 14:
                answer = squareroot(num1);
                break;
            case 15:
                answer = exponent(num1);
                break;
            default:
                return 0;
        }
        historypush(answer);
        printf("The output of the operation is: %f \n", answer);
    } 


else if (n == 16) 
{
        printf("Output history: \n");
        printf("%s", &history);
    } 
else if (n == 17) 
{
        printf("Thanks for using, exiting now! \n");
        return 0;
    }
 else 
{
        printf("Enter a valid input! \n");
        return main();
    }
    return main();
}






























