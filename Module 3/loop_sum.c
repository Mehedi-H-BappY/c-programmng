#include <stdio.h>
int main()
{
    int i, sum = 0, n;
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}//Which of the below loop will give the same values of i in reverse order for the loop 
//for(int i=0;i<n;i++)



