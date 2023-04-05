#include <stdio.h>
int main()
{
    int i=10; // initialization
    while (i<=15) // condition
    {
        //i++;//output: 11 12 13 14 15 16
        printf("%d\n", i);
        i++; // increment (output): 10 11 12 13 14 15
    }
    //printf("\n%d", i); // output: 16
    return 0;
}
