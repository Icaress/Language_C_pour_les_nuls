#include <string.h>
#include <math.h>
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

int exo13(int tab[],int n,int x)
{
    int droite = 0;
    int gauche = n-1;

    while (gauche <= droite)
    {
        int millieu = (gauche + droite)/2;

        if (tab[millieu] == x)
        {
            return millieu;
        }
        if (tab[millieu] < x)
        {
            gauche = millieu + 1;
        }
        else
        {
            droite = millieu - 1;
        }
    }
    return -1;
}

void exo14(int tab[],int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                int tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }
}

int exo15(char s[])
{
    int count = 0;
    for (int i = 0;i<strlen(s);i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
        {
            count++;
        }
    }
    return count;
}

char exo16(char s[])
{
    int gauche = 0;
    int droite = strlen(s) - 1;

    for (int i = 0;i<strlen(s)/2;i++)
    {
        if (s[gauche] != s[droite])
        {
            return 'F';
        }
        gauche++;
        droite--;
    }
    return 'T';
}

void exo_17(char s[])
{
    int gauche = 0;
    int droite = strlen(s) - 1;

    for (int i = 0;i<strlen(s)/2;i++)
    {
        char temp = s[gauche];
        s[gauche] = s[droite];
        s[droite] = temp;
        gauche++;
        droite--;
    }
}

int exo18_1(int tab[][100],int n)
{
    int somme = 0;
    for (int i = 0;i<n;i++)
    {
        somme += tab[i][i];
    }
    return somme;
}
void exo18_2(int tab[][100],int n)
{
    for (int i = 0;i<n;i++)
    {
        for (int j = 0;j<n;j++)
        {
            int temp = tab[i][j];
            tab[i][j] = tab[j][i];
            tab[j][i] = temp;
        }
    }
}

double exo19_1(int tab[],int n)
{
    double moy = 0;
    for (int i = 0;i<n;i++)
    {
        moy += tab[i];
    }
    moy /= n;

    double somme = 0;

    for (int i = 0;i<n;i++)
    {
        double diff = tab[i] - moy;
        somme += diff * diff;
    }

    return somme/n;
}

double exo19_2(int tab[],int n)
{
    return sqrt(exo19_1(tab,n));
}

int exo20_1(int n)
{
    if (n <= 1)
        return 0;

    for (int i = 2; i <= (int)sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int exo20_2(int n)
{
    int candidate = n + 1;

    while (!exo20_1(candidate))
    {
        candidate++;
    }

    return candidate;
}