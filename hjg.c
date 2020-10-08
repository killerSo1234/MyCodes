#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int s = 2 * n - 1;
    int ss = s;
    int a[s][s];
    int p = 0;
    while (n > 0)
    {
        for (size_t i = p; i < s; i++)
        {
            for (size_t j = p; j < s; j++)
            {
                if (i == p || j == p || i == s - 1 || j == s - 1)
                {
                    a[i][j] = n;
                }
            }
        }
        n--;
        s--;
        p++;
    }
    for (size_t i = 0; i < ss; i++)
    {
        for (size_t j = 0; j < ss; j++)
        {
            // cout << a[i][j] << " ";
            printf("%d ",a[i][j]);
        }
        printf("\n");
        // cout << endl;
    }

    return 0;
}