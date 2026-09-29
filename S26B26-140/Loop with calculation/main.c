#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TOTAL;
    for(int value=7;value<=100;value=value+7)
    {
        TOTAL+=value;
    }
    printf("The total of multiples of 7 from 1 to 100 is %d\n",TOTAL);
    return 0;
}
