#include <stdio.h>
int main()
{
    const int STEP = 7;
    for (int i = 1; i < 10; i++)
    {
        printf("%d * %d = %d\n", STEP, i, STEP*i);
    }
    return 0;
}