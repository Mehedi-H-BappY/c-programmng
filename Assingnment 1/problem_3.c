#include <stdio.h>
#include <stdbool.h>
int main()
{
    unsigned int N;
    scanf("%u", &N);
    if (N % 3 == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}