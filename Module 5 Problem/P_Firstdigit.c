#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int first_digit = a;
    while (first_digit >= 10)
    {
        first_digit = first_digit / 10;
    }
    if (first_digit % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}