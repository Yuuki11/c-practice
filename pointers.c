#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int *ptr = &age;                     /* pointer variable that holds the address of age variable */
    printf("Value of age: %d\n", *&age); /* dereferncing a pointer*/
    return 0;
}
