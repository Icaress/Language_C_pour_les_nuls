#include <stdio.h>

char request_char(void)
{
    char ch;
    //vérification
    printf("Enter a character: ");
    if (scanf(" %c", &ch) != 1) {// pas égal a true
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}
        return '\0';
    }
    return ch;
}

int request_int(void)
{
    int number;
    //vérification
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {//pas égal a true
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}
        return 0;
    }
    return number;
}

void ascii_to_char(int ascii)
{
    printf("\nASCII -> char : %c\n", (char)ascii);//affiche
}

void char_to_ascii(char ch)
{
    printf("\nchar -> ASCII : %d \n", (int)ch); // affiche
}

int main(void)
{
    ascii_to_char(request_int());
    char_to_ascii(request_char());
    return 0;
}
