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

     printf("Enter number to Check Weather it is Even or Odd: ");
     scanf("%d",&iValue);

     iRet =CheckEvenOdd(iValue);
     
     if (iRet == 0)
     {
        printf("%d is Even",iValue);

     }
     else{
        printf("%d is Odd",iValue);
     }
     


    return 0;

}
