//
// Created by malar on 05/12/2025.
//
int exo_1(int x)
{
    return 3 * x + 2;
}

void exo2(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int exo3(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    return 0;
}

int exo4(int a,int b,int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    if (b > a && b > c)
    {
        return b;
    }
    return c;
}

int exo5(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * exo5 (n - 1);
}

int exo6(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return exo6(n - 1) + exo6(n - 2);
}

int exo7(int a,int n)
{
    int value = 0;
    if (n < 0)
    {
        return 1;
    }
    for (int i = 0 ;i != n;i++)
    {
        value *= a;
    }
    return value;
}

int exo8 (int a,int b)
{
    if (b == 0)
    {
        return a;
    }
    return exo8(b,a % b);
}

int exo9(int a,int b)
{
    return a * b / exo8(a,b);
}

int exo10_somme(int tab[],int n)
{
    int somme = 0;
    for (int i = 0;i<n;i++)
    {
        somme += tab[i];
    }
    return somme;
}

int exo10_moyenne(int tab[],int n)
{
    int moyenne = 0;
    for (int i = 0;i<n;i++)
    {
        moyenne += tab[i];
    }
    return moyenne / n;
}

void exo11(int tab[],int n,int *min,int *max)
{
    *min = tab[0];
    *max = tab[0];

    for (int i = 0;i<n;i++)
    {
        if (*min > tab[i])
        {
            *min = tab[i];
        }
        if (*max < tab[i])
        {
            *max = tab[i];
        }
    }
}

int exo_12(int tab[],int n,int x)
{
    for (int i = 0;i<n;i++)
    {
        if (tab[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int exo13(int tab,int n,int x)
{
    
}