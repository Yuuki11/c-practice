#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    printf("Enter your name:");
    fgets(name, 20, stdin);
    printf("Hello, %s!\n", name); /* anything after %s with fgets is going to appaear in a new line*/
    return 0;
}