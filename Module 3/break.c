#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)

    {
        if(i == 5)
        {
            break; // output: 1 2 3 4 
        }
        printf("%d\n", i);
        //  if(i == 5)
        // {
        //     break; output: 1 2 3 4 5
        // }
    }

    return 0;
}
