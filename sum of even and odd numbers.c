// WAP to print the sum of even and odd numbers from 1 to N numbers.

#include <stdio.h>

int main()
{
    int N, i;
    int sumEven = 0;
    int sumOdd = 0;

    printf("Enter the number N ---> ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            sumEven += i;
        }
        else
        {
            sumOdd += i;
        }
    }

    printf("The sum of even numbers ---> %d\n", sumEven);
    printf("The sum of odd numbers ---> %d\n", sumOdd);

    return 0;
}
