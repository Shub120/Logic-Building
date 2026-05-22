#include <stdio.h>

int main()
{
    float Fvalue1=0.0f;
    float Fvalue2=0.0f;

    float FResult=0.0f;

    printf("Enter the first number: ");
    scanf("%f",&Fvalue1);

    printf("Enter the Second number: ");
    scanf("%f",&Fvalue2);

    FResult=Fvalue1+Fvalue2;
    printf("Total number is : %f",FResult);

return 0;
    
}