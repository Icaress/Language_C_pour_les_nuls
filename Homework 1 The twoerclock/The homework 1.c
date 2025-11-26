#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>

void request_time(int *time_request_hour,int *time_request_minute)//permet de passer par une adresse et donc renvoie deux valeur
{
    char trash = 0;
    printf("request time : ");
    scanf("%d %c %d",time_request_hour,&trash,time_request_minute);//passage par adresse

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    if (*time_request_hour > 24 || *time_request_hour < 0)
    {
        printf("hour is not correct");
    }
    if (*time_request_minute > 60 || *time_request_minute < 0)
    {
        printf("time minute is not correct\n");
    }
}
void print_loop(int *hours,int *minute)//meme chose
{
    _flushall();
    printf("Press any key for start\n");
    getch();



    while (1)
    {
        int h1 = *hours / 10;
        int h2 = *hours % 10;
        int m1 = *minute / 10;
        int m2 = *minute % 10;

        printf("\ntime its %02i:%02i",*hours,*minute);
        if (*hours == 0 && *minute == 0 || *hours == 11 && *minute == 11 || *hours == 22 && *minute == 22)
        {
            printf("\nPerfect Mirror");
        }
        else if (h1 == m2 && h2 == m1)
        {
            printf("\nImperfect Mirror");
        }
        if (*hours >= 7 && *minute >= 30 || *hours <= 8 && *minute == 0)
        {
            printf("\nTime for Breakfast");
        }
        if (*hours >= 11 && *minute >= 30 || *hours <= 13 && *minute == 0)
        {
            printf("\nTime for lunch");
        }
        if (*hours >= 18 && *minute >= 30 || *hours <= 20 && *minute == 0)
        {
            printf("\nTime for dinner");
        }
        if (*minute == 00)
        {
            printf("\n");
            for (int i = 0;i<*hours;i++)
            {
                printf("\\dring");
            }
        }
        if (*hours == 23 && *minute == 59)
        {
            *hours = 0;
            *minute = 0;
        }
        else if (*minute == 59)
        {
            *minute = 0;
            *hours += 1;
        }
        else
        {
            *minute += 1;
        }

        if (kbhit())// un peu d'IA pour des fonction inconnue au bataillon
        {
            while (kbhit())
                getchar();

            printf("\nTape 'adm_exit' pour quitter : ");

            char exit[100];
            fgets(exit, 100, stdin);

            // comparer sans le \n
            exit[strcspn(exit, "\n")] = '\0';

            if (strcmp(exit, "adm_exit") == 0)
                break;
        }
        else
        {
            sleep(2);
        }
    }
}

int main(void)//fonction main
{
    int h,m;
    request_time(&h,&m);
    print_loop(&h,&m);
    return 0;
}