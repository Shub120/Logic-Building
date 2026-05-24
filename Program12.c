#include<stdio.h>

void CheckEvenOdd(int iNO)
{
    int iRemender = 0 ;


    iRemender=iNO % 2;

     if (iRemender== 0)
     {
        printf("number is even ");

     } 
     else{
        printf("number is odd");
     }

    

}

int main ()
{
    int iValue = 0;
    
     printf("enter number");
     scanf("%d",&iValue);

     CheckEvenOdd(iValue);

     


    return 0;

}
