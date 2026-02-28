#include <stdio.h>
#include <stdlib.h>

int main()
{
    int FirstNum;
    int SecondNum;
    int Result;
    printf("Enter first number:");
    scanf("%d", &FirstNum);
    printf("Enter second number:");
    scanf("%d", &SecondNum);
    printf("Answer: %d\n", FirstNum + SecondNum);
    return 0;
}