#include <stdio.h>

int main()
{
    int i, j;

    for(i=0; i<=5; i++)
    {
        for(j=0; j<=i; j++)
        {
            if(j % 2 == 1)
            {
                printf("01");
            }
            else
            {
                printf("01");
            }
        }

        printf("\n");
    }

    return 0;

}
