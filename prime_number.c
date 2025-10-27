#include <stdio.h>
void prime_number(int n)
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

int main (void)
{
    int picked_number = request_number();
    prime_number(picked_number);
}