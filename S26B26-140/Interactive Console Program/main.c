#include <stdio.h>
#include <stdlib.h>

int main()
{
   int A,B,C;
   printf("Enter the three triangle sides");
   scanf("%d %d %d",&A,&B,&C);
   if((A+B>C)&&(A+C>B)&&(B+C>A)){
    printf("%d ,%d and %d are sides of a triangle\n",A,B,C);
   }else{
       printf("%d,%d and %d are not sides of a triangle",A,B,C);
   }

    return 0;
}
