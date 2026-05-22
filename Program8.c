#include <stdio.h>

float AddTwoFumbers(float No1,float No2)
{
    float Result =0;
    
    Result=No1+No2;

    return Result;

}


int main ()
{
    float FValue1=0;
    float FValue2=0;
    float FResult=0;

    printf("Enter the number 1st:");
    scanf("%f",&FValue1);

    printf("Enter the number 2st:");
    scanf("%f",&FValue2);

    FResult= AddTwoFumbers(FValue1,FValue2);
    printf ("Final Result is : %f ",FResult);


}