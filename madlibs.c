#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char celebrityFirst[20];
    char celebrityLast[20];
    char pluralNoun[20];
    printf("Enter a color:");
    scanf("%s", color);
    printf("Enter a plural noun:");
    scanf("%s", pluralNoun);
    getchar(); /* to consume the newline character left by scanf */
    printf("Enter a celebrity name:");
    /* fgets(celebrity, 20, stdin); */
    scanf("%s %s", celebrityFirst, celebrityLast); /* to read two words for celebrity name */

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityFirst, celebrityLast);

    return 0;
}