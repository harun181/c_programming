#include <math.h>
#include <stdio.h>

int checkPrimeNumber(int n);

int main()
{
    int n, flag;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // check prime number
    flag = checkPrimeNumber(n);
    if (flag == 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}

// function to check prime number
int checkPrimeNumber(int n)
{
    int i, flag = 1, squareRoot;

    // computing the square root
    squareRoot = sqrt(n);
    for (i = 2; i <= squareRoot; ++i)
    {
        // condition for non-prime number
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}