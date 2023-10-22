#include <stdio.h>
#include <string.h>

// struct with typedef person
typedef struct Person
{
    char name[50];
    int citNo;
    float salary;
} person;

int main()
{

    // create  Person variable
    person p1;

    // assign value to name of p1
    strcpy(p1.name, "George Orwell");

    // assign values to other p1 variables
    p1.citNo = 1984;
    p1.salary = 2500;

    // print struct variables
    printf("Name: %s\n", p1.name);
    printf("Citizenship No.: %d\n", p1.citNo);
    printf("Salary: %.2f", p1.salary);

    return 0;
}