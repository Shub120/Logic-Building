#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNO)
{
    int iRemender = 0 ;
  

     iRemender=iNO % 2;

    if(iRemender==0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main ()
{
    int iValue = 0;
    bool bRet = false;

     printf("Enter number to Check Weather it is Even or Odd: ");
     scanf("%d",&iValue);

     bRet =CheckEvenOdd(iValue);
     
     if (bRet == true)
     {
        printf("%d is Even",iValue);

     }
     else{
        printf("%d is Odd",iValue);
     }
     


    return 0;

}
