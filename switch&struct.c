#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[50];
    int age;
    float gpa;
    char major[50];
};

int main()
{
    /* char grade = 'Z';

    switch (grade)
    {
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
        printf("Well done!\n");
        break;
    case 'C':
        printf("Good\n");
        break;
    case 'D':
        printf("You passed\n");
        break;
    case 'F':
        printf("Better try again\n");
        break;
    default:
        printf("Invalid grade\n");
        return 0;
    }*/
    struct student student1;
    student1.age = 20;
    student1.gpa = 3.5;
    strcpy(student1.name, "Keegan");
    strcpy(student1.major, "Computer Science");

    printf("Name: %s\n", student1.name);
}