#include <stdio.h>
int main()
{
    int a = 0, i;
    for (i = 0; i < 5; i++)
    {   //break;//-->output: i=0 a=0(line 16)
        //continue;//-->outut:i=5 a=0(line 16)
        a++;
        //break;//-->output: i=0 a=1(line 16)
        //continue;//-->output: i=5 a=5(line 16)
        printf("%d %d\n", i, a);
    }
    printf("last value of i = %d\n", i);
    printf("last value of a = %d\n", a);

    printf("%d %d", i, a);//(uporer output gula ei printf er value)

    return 0;
}
//continue {} er moddhe niche ja pabe ta cancel korbe kintu {} er baire ja pabe ta cancel korbe na
//break er niche ja pabe sob cancel korbe