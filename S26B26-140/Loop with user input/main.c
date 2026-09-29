#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,integer,TOTAL=0;
   printf("Number of values to the sum");
   scanf("%d",&num);
   for(int j=1;j<=num;j++){
    printf("Enter the integer %d",j);
    scanf("%d",&integer);
    TOTAL=+integer;
   }
   printf("The total is %d\n",TOTAL);
   printf("Average is %.2f",(float)TOTAL/num);

    return 0;
}
