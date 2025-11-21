#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* Create_Array()
{
    char type[20];
    printf("what type of Array you want to create :\n");
    scanf("%s",type);


    int size;
    printf("How many value do you want to create :\n");
    scanf("%d",&size);

    void* array = NULL;

    if (strcmp(type,"int")==0)
    {
        array = malloc(size*sizeof(int));
        int *array_int = (int*)array;
        for (int i = 0; i < size; i++)
        {
            printf("Enter integer for index %i : ",i+1);
            scanf(" %d",&array_int[i]);
        }
    }
    else if (strcmp(type,"char")==0)
    {
        array = malloc(size*sizeof(char));
        char *array_char = (char*)array;
        for (int i = 0; i < size; i++)
        {
            printf("Enter character for index %i : ",i+1);
            scanf(" %c",&array_char[i]);
        }
    }
    else if (strcmp(type,"float")==0)
    {
        array = malloc(size*sizeof(float));
        float *array_float = (float*)array;
        for (int i = 0;i < size;i++)
        {
            printf("Enter float for index %i : ",i+1);
            scanf(" %f",&array_float[i]);
        }
    }
    else if (strcmp(type,"double")==0)
    {
        array = malloc(size*sizeof(double));
        double *array_double = (double*)array;
        for (int i = 0;i < size ; i++)
        {
            printf("Enter double value for index %i : ",i+1);
            scanf(" %lf",&array_double[i]);
        }
    }
    else if (strcmp(type,"string")==0)
    {
        int size_max;
        printf("what the size max you want for every string");
        scanf("%d",&size_max);

        char **strings = malloc(size*sizeof(char*));
        for(int i=0;i<size;i++)
        {
            strings[i] = malloc((size_max+1)*sizeof(char));
        }
        for (int i = 0;i < size;i++)
        {
            printf("Enter the string value for index %i : ",i+1);
            scanf("%s",strings[i]);
        }
        return strings;

    }
    if (!array)
    {
        printf("\n memory allocation failed");
    }
    return array;
}
int main(void)
{
    void* created_array_1 = Create_Array();
    free(created_array_1);
    return 0;
}