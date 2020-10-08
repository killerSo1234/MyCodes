#include <stdio.h>
#include <limits.h>

union number {
    int x1, x2, x3, x4, x5;
};

int main()
{
    union number fiveNumbers;
    int lowest = INT_MAX;
    printf("Enter First Number\n");
    scanf("%d", &fiveNumbers.x1);
    if (fiveNumbers.x1 < lowest)
    {
        lowest = fiveNumbers.x1;
    }
    printf("Enter Second Number\n");
    scanf("%d", &fiveNumbers.x2);
    if (fiveNumbers.x2 < lowest)
    {
        lowest = fiveNumbers.x2;
    }
    printf("Enter Third Number\n");
    scanf("%d", &fiveNumbers.x3);
    if (fiveNumbers.x3 < lowest)
    {
        lowest = fiveNumbers.x3;
    }
    printf("Enter fourth Number\n");
    scanf("%d", &fiveNumbers.x4);
    if (fiveNumbers.x4 < lowest)
    {
        lowest = fiveNumbers.x4;
    }
    printf("Enter fifth Number\n");
    scanf("%d", &fiveNumbers.x5);
    if (fiveNumbers.x5 < lowest)
    {
        lowest = fiveNumbers.x5;
    }
    
    // printf("\n%d %d %d %d %d\n",fiveNumbers.x1,fiveNumbers.x2,fiveNumbers.x3,fiveNumbers.x4,fiveNumbers.x5);

    printf("Lowest Number Was %d\n", lowest);
}