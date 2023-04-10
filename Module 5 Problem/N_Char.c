#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);

    if (a >= 'a' && a <= "z")
    {
        int uppercase = a - 32;
        printf("%c", uppercase);
    }
    else
    {
        int lowercase = a + 32;
        printf("%c", lowercase);
    }

    return 0;
}