#include <stdio.h>
int main()
{
    int D[2],min,max;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Number :");
        scanf("%d",&D[i]);
    }
    min=D[0];
    max=D[0];
    for (int j = 0; j < 3; j++)
    {
        if (min>D[j])
        {
            min=D[j];
        }
        if (max<D[j])
        {
            max=D[j];
        }
        
    }
    int sum =min+max;
    printf("Summation is %d", sum);
    
    return 0;
}
