#include <stdio.h>
#include <string.h>

void exo1(int x)
{
    int *p = &x;
    printf("%d\n",x);
    printf("%p\n",&x);
    *p = 20;
    printf("%d",x);
}

void exo2(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void exo3(int tab[],int n,int *min,int *max)
{
    for (int i = 0;i < n;i++)
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

int exo4_1(int tab[],int n)
{
    int *p = tab;
    int somme = 0;

    for (int i = 0;i<n;i++)
    {
        somme += *p;
        p++;
    }
    return somme;
}

int exo4_2(int tab[],int n)
{
    return exo4_1(tab,n)/n;
}

void exo5(int tab[],int n,int *gauche,int *droite)
{
    for (int i = 0;i<n;i++)
    {
        int temp = tab[*gauche];
        *gauche = *droite;
        *droite = temp;
        gauche++;
        droite--;
    }
}

int exo6(char s[])
{
    int count = 0;
    for (int i = 0;i<strlen(s);i++)
    {
        count++;
    }
    return count;
}

void exo7(char *dst, char *src)
{
    while (*src != '\0') {
        *dst = *src;
        dst++;
        src++;
    }
    *dst = '\0';
}

int exo8(char s[])
{
    int count = 0;

    for (int i = 0;i<strlen(s);i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'y' || s[i] == 'u')
        {
            count++;
        }
    }
    return count;
}





int main()
{
    //exo1(10);
}