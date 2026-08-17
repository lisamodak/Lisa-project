#include <stdio.h>

int main()
{
    int N;

    printf("Enter N: ");
    scanf("%d", &N);

    // Program 1: 0, 2, 4, 6...N
    printf("\nProgram 1:\n");

    for(int i = 0; i <= N; i = i + 2)
    {
        printf("%d ", i);
    }


    // Program 2: 1, 3, 9, 27...Till N
    printf("\n\nProgram 2:\n");

    for(int i = 1; i <= N; i = i * 3)
    {
        printf("%d ", i);
    }


    // Program 3: 1,2,3,5,7,11,17,...Till N
    printf("\n\nProgram 3:\n");

    for(int i = 2; i <= N; i++)
    {
        int isPrime = 1;

        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}