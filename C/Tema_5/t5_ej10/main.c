#include <stdio.h>
#include <stdlib.h>

void emptyScreen(void);

int main()
{
    emptyScreen();
    return 0;
}

void emptyScreen(void)
{
    int i = 0;
    for (i; i<25; i++)
    {
        printf("\n");
    }
}
