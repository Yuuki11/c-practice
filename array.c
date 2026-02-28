#include <stdio.h>
#include <stdlib.h>

void sayHi();
int main()
{
    sayHi();
    /*  char name[][10] = {"Arrays", "are", "cool"};  or */
    char *name[] = {"Arrays", "are", "cool"};
    name[2] = "awesome";
    printf("%s\n", name[2]);
    return 0;
}

void sayHi()
{
    printf("Hello user!\n");
}