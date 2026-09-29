#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    float sum,product,difference,quotient,remainder;
    printf("Enter the first integer:");
    scanf("%d",&num1);
    printf("Enter the second integer:");
    scanf("%d",&num2);
    sum=num1+num2;
    product=num1*num2;
    difference=num1-num2;
    quotient=num1/num2;
    remainder=num1%num2;
    printf("SUM=%.2f\n",sum);
    printf("PRODUCT=%.2f\n",product);
    printf("DIFFERNCE=%.2f\n",difference);
    printf("QUOTIENT=%.2f\n",quotient);
    printf("REMAINDER=%.2f",remainder);
    return 0;
}
