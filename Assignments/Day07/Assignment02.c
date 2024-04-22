/* Make a functional calculator which have all the arithmatic operation*/
#include<stdio.h>

float addition(float a, float b)
{
    return a+b;
}

float subtraction(float a, float b)
{
    return a-b;
}

float multiplication(float a, float b)
{
    return a*b;
}

float division(float a, float b)
{
    if (b == 0)
    {
        printf("infinite\n");
        return 0;
        
    }
    else
    {
        return a/b;
    }
    
}


int main()
{
    float x, y;
    char Operation;
 

    printf(" Enter First Number: ");
    scanf("%f", &x);

    printf(" Enter Second Number: ");
    scanf("%f", &y);

    printf("Please enter which function you want to execute ((+, -, *, /)): \n");
    scanf("%c",&Operation);

    float result;

    switch(Operation)
    {
        case '+':
        {
                 result = addition(x, y);
                 break;
        }

        case '-':
        {
                 result = subtraction(x, y);
                 break;
        }

        case '*':
        {
                 result = multiplication(x, y);
                 break;

        }

        case '/':
        {
                 result = division(x, y);
                 break;
        }
        default:
        {
        printf(" Invalid Option you have chosen.\n");
        }
    

    }

    printf(" Result : %f\n", result);

    return 0;
}



    










