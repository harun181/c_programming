#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE *fptr;

    // use appropriate location if you are using MacOS or Linux
    fptr = fopen("program.txt", "w");

    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    else
    {
        printf("File Created.");
        fclose(fptr);
    }

    return 0;
}