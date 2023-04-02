#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("Burger khabo");
    }
    else if (tk >= 50)
    {
        printf("Sandwich khabo");
    }
    else if (tk >= 20)
    {
        printf("Samosa khabo");
    }
    else
    {
        printf("kisu khabo na");
    }
}