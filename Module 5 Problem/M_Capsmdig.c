#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a >= 48 && a <= 57)
    {
        printf("IS DIGIT\n");
    }
    else if (a >= 65 && a <= 90)
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else
    {
        printf("ALPHA\nIS SMALL");
    }
    return 0;
}