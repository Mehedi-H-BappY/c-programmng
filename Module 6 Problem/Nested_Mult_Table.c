#include <stdio.h>
int main()
{
    int b;
    scanf("%d",&b);
    for (int j = 1; j <= 10; j++)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("%d * %d = %d\n", j, i, j * i);
        }
        printf("\n");
    }
    return 0;
}