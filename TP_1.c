#include <math.h>
#include <stdio.h>

void exo_1()
{
    printf("Hello World!\n");
}
void exo_2()
{
    int a,b;
    printf("Please enter a number: ");
    scanf("%i",&a);
    printf("Please enter a number: ");
    scanf("%i",&b);
    printf("%i %i\n",a,b);
}
void exo_3(int x,int y)
{
    int tmp = x;
    x = y;
    y = tmp;
    printf("%i %i\n",x,y);
}
void exo_4(int a,int b,int c)
{
    a += b + c;
    a /= 3;
    printf("%i\n",a);
}
void exo_5(float celsius)
{
    float Fahrenheit = 1.8 * celsius + 32;
    printf("%f\n",Fahrenheit);
}
void exo_6(int a,int b)
{
    if (a>b)
    {
        printf("a is a bigger number");
    }
    else
    {
        printf("b is a bigger number");
    }
}
void exo_7(int a,int b,int c)
{
    if (a>b && a>c)
    {
        printf("a is the bigger number");
    }
    if (b>c && b>a)
    {
        printf("b is the bigger number");
    }
    else
    {
        printf("c is the bigger number");
    }
}
void exo_8(int n)
{
    if (n % 2 == 0)
    {
        printf("n is an even number");
    }
    else
    {
        printf("n is an odd number");
    }
}
void exo_9(int x)
{
    if (x < 0)
    {
        x = abs(x);
    }
    printf("%i\n",x);
}
void exo_10(int a,int b,int c)
{
    int delta = b*b - 4*a*c;
    if (delta > 0)
    {
        printf("two root");
        int x1 = b - sqrt(delta)/(2*a);
        int x2 = b + sqrt(delta)/(2*a);
        printf("%i %i\n",x1,x2);
    }
    if (delta == 0)
    {
        printf("one root");
        int x1 = b - sqrt(delta)/(2*a);
        printf("%i\n",x1);
    }
    else
    {
        printf("no root found");
    }
}
//Cours tp du 05/11 ↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑

void exo_11(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        n *= i;
        printf("%i\n",n);
    }
}
void exo_12(int a)
{
    int total = 1;
    while (a != 0)
    {
        total *= a;
        a--;
    }
    printf("%i\n",total);
}
void exo_13(int n)
{
    int a = 0;
    int b = 1;
    int c;
    while (n > 0)
    {
        c = a+b;
        a = b;
        b = c;
        printf("%i\n",c);
        n--;
    }
}
void exo_14(int n)
{
    int somme = 0;
    while (n != 1)
    {
        somme += n;
        n --;
    }
}
int exo_14_version_recursive(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + exo_14_version_recursive(n-1);
}
int exo_15(int n)
{
    int compteur = 0;
    while (n > 1)
    {
        n /= 10;
        compteur ++;
        if (n<1)
        {
            return compteur;
        }
    }
    return 1;
}
void exo_16(int  n)
{
    int renverser = 0;
    while (n > 0)
    {
        renverser = n * 10 + (n % 10);
        n /= 10;
    }
}
void exo_17(int n)
{
    if (n <= 1) {
        printf("%d is not a prime number\n", n);
        return;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("%d is not a prime number\n", n);
            return;
        }
    }

    printf("%d is a prime number\n", n);
}

int request_number ()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    return number;
}
void exo_18()
{
    int a = request_number();
    int b = request_number();

    if (a < 0 || b < 0)
    {
        printf("The number need to be more than 0");
    }
    else
    {
        while (b > 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
            printf("%i %i ", a, b);
        }
    }
}

void exo_19()
{
    int medium = 0;
    int tab[] = {1,2,3,6,4,8,4,1};
    int max = tab[0];
    int min = tab[0];
    printf("%d ",min);
    for (int i = 0; i < 8; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
        if (tab[i] < min)
        {
            min = tab[i];
        }
        medium+= tab[i];
    }
    medium /= 8;
    printf("%i %i %i\n",max,min,medium);
}
void exo_20()
{
    char mot[10] = "salutlele";
    int compteur = -1;

    for (int i = 0; i <= 10; i++)
    {
        if (mot[i] != '\0')
        {
            compteur++;
        }
    }
    printf("%i",compteur);
}


// int main(void)
// {
    // exo_1();
    // exo_2();
    // exo_3(1,2);
    // exo_4(10,20,30);
    // exo_5(18);
    //exo_6(10,20);
    //exo_12(9);
    //exo_18();
    // exo_19();
    // exo_20();

    // return 0;
// }

