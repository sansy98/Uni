#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *punter, k;
    int c[5] = {1,2,3,4,5};
    punter = c + 4;
    *(punter-2) = 9;
    punter--;
    *(punter) = 7;
    punter[1] = 11;
    for(k = 0; k<5; k++)
        {printf("   %d, ", *(c+k)); }
    printf("n");
    system("pause");
    return 0;
}
