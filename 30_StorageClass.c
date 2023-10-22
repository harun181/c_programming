#include <stdio.h>
void display();
int glob = 6; // global variable
int main()
{
    int x = 5; // Local Variable
    display();
    display();
}
void display()
{
    static int c = 1; // Static Variable
    c += 5;
    printf("%d  ", c);
}
