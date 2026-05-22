#include <stdio.h>  // Header file 
float AddTwoNumbers(float No1 ,float No2) //no1 for 1st FValue and No2 for 2nd Fvalue2
{
    float Answer=0.0f;

    Answer= No1+No2;

    return Answer;  // by adding the input will be send back to line number 26 
}



int main()
{
    float Fvalue1=0.0f;
    float Fvalue2=0.0f;
    float FResult=0.0f;

    printf("Enter the First number");
    scanf("%f",&Fvalue1);

    printf("Enter the Second number ");
    scanf("%f",&Fvalue2);

    FResult=AddTwoNumbers(Fvalue1,Fvalue2);
    printf("Addition of two number is :%f",FResult);

    return 0;
}