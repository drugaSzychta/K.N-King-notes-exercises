#include <stdio.h>

int main()
{
    int j, max, min;
    for(int i=0; i<4 ; i++)
    {
        scanf("%d",&j);
        if(i==0)
            max=j;
        else if(j>max)
            max=j;
        else
            min=j;
    }
    printf("Max: %d, min: %d",max,min);
    return 0;
}
