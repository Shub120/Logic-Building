#include<stdio.h>

int CheckEvenOdd(int iNO)
{
    int iRemender = 0 ;


    iRemender=iNO % 2;


    
    
return iRemender;
}

int main ()
{
    int iValue = 0;
    int iRet = 0;

     printf("enter number");
     scanf("%d",&iValue);

     iRet =CheckEvenOdd(iValue);
     
     if (iRet == 0)
     {
        printf("number is even");

     }
     else{
        printf("number is odd");
     }
     


    return 0;

}
