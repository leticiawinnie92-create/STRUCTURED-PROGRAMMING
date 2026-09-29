#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   printf("Enter the integer:");
   scanf("%d",&num);
    if (num%2==0){
        printf("It is an even number");
    }else{
        printf("it is an odd number");
    }
    return 0;
}
