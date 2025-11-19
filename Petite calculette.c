#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addition(int a,int b)
{
    printf("\nAddition : %d \n", a+b);
}
void subtraction(int a,int b)
{
    printf("\nSubtraction : %d \n", a-b);
}
void multiplication(int a,int b)
{
    printf("\nMultiplication : %d \n", a*b);
}
void division(int a,int b)
{
    printf("\nDivision : %d \n", a/b);
}
void modulo(int a,int b)
{
    printf("\nModulo : %d \n", a%b);
}
void power(int a,int b)
{
    printf("\nPower : %f \n", pow(a,b));
}
void squared_root(int a)
{
    printf("\nSquared root : %f \n", sqrt(a));
}

void request_text(char *text, int size)
{
    printf("\nEnter what type of calcul you want (addition,subtraction,multiplication,division,modulo,squared,square root or exit if u want to stop\n");
    scanf("%s",text);
}
int request_int()
{
    int n;
    printf("\nEnter value: ");
    scanf("%i", &n);
    return n;
}
int request_int2()
{
    int n;
    printf("\nEnter value u want to take on the array you entered before : ");
    scanf("%i", &n);
    return n;
}
int check_memory (int *p)
{
    if (p == NULL)
    {
        printf("memories error");
        return 1;
    }
    return 0;
}
int contains(int size,int value,int *pointer)
{
    for (int i = 0; i < size; i++)
    {
        if (pointer[i] == value)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    printf("Please enter the number of value you want to have : \n");
    scanf("%i",&n);
    int *p = malloc(n * sizeof(int));
    check_memory(p);
    for (int i = n - 1; i >= 0; i--)
    {
        int value = request_int();

        if (contains(i,value,p))
        {
            printf("\n%d is already in use\n", value);
            i--;
            continue;
        }
        p[i] = value;
    }

    while (1)
    {
        int requested_value_1 = request_int2();
        int requested_value_2 = request_int2();
        int correct = 0;
        for (int i = 0; i < n; i++)
        {
            if (p[i] == requested_value_1 || p[i] == requested_value_2)
            {
                printf("Number find\n");
                correct++;
            }
        }
        if (correct != 2)
        {
            printf("\nnot or not every Number(s) find");
            continue;
        }
        printf("\n Correct");
        printf("\n -------------What type of calcul you want-------------\n");
        char type_you_want[50];
        request_text(type_you_want, 50);
        if (strcmp(type_you_want, "addition") == 0)
        {
            addition(requested_value_1,requested_value_2);
        }
        if (strcmp(type_you_want, "subtraction") == 0)
        {
            subtraction(requested_value_1,requested_value_2);
        }
        if (strcmp(type_you_want, "multiplication") == 0)
        {
            multiplication(requested_value_1,requested_value_2);
        }
        if (strcmp(type_you_want, "division") == 0)
        {
            division(requested_value_1,requested_value_2);
        }
        if (strcmp(type_you_want, "modulo") == 0)
        {
            modulo(requested_value_1,requested_value_2);
        }
        if (strcmp(type_you_want, "squared_root") == 0)
        {
            squared_root(requested_value_1);
        }
        if (strcmp(type_you_want, "exit") == 0)
        {
            free(p);
            return 0;
        }
    }
}