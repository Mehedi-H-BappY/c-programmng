#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)

    {
        if (i == 5)
        {
            continue; // output: 1 2 3 4 6 7 8 9 10
        }
        printf("%d\n", i);
        // if (i == 5)
        // {
        //     continue; // output: 1 2 3 4 5 6 7 8 9 10
        // }
    }
     //printf("last value of i = %d", i);//output: last value of i = 11

    return 0;
}
