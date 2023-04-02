#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("Cox's Bazar jabo");
        
        if (tk >= 10000)
        {
            printf("\nSaint Martin jabo");
        }
        else
        {
            printf("\nFerot cole asbo");
     
        }
    }
    else
    {
        printf("Kothao jabo na");    
    }
    return 0;
}