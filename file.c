#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fpointer = fopen("employees.txt", "w");

    fprintf(fpointer, " Jim, salesman\nPam, Receptionist\nRam, Manager");

    fclose(fpointer);
    return 0;
}