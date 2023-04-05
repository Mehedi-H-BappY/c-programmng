#include <stdio.h>
int main()
{
    int i = 10; // initialization
    do
    {
        // i++;//output: 11 12 13 14 15 16
        printf("%d\n", i);
        i++;           // increment (output): 10 11 12 13 14 15
    } while (i <= 15); // condition
    // printf("\n%d", i); // output: 16
    return 0;
}

// do while loop e condition mittha hoileo loop ta ekbar run hobe; mane initial value ta print hobe
//  int i = 100; // initialization
//      do
//      {
//           i++;//output: 11 12 13 14 15 16
//          printf("%d\n", i);
//          i++;           // increment (output): 10 11 12 13 14 15
//      } while (i <= 15);//output: 100
//    return 0;
//  }