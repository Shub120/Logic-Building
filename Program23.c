#include<stdio.h>
#include<stdbool.h>

//User Defined Macro
# define AGE_INVALID -1

int CalculateTickitPrize(int iAge)
{
    //input Filter
    if(iAge<0 )
    {
        return AGE_INVALID;
    }
    
   if(iAge >= 0 && iAge <= 5)
   {
     return 0;
   }
   else if (iAge >=6 && iAge <=18)
   {
    return 500;
   }
   else if (iAge >=19 && iAge <=50)
   {
    return 900;
   }
   else
   {
    return 400;
   }

     
}

int main ()
{
    int iValue = 0;
     int iRet=0;

    printf("Please Enter your age to calculate tickit prize: \n");
    scanf("%d",&iValue);
   
     iRet =CalculateTickitPrize(iValue);
     if (iRet== AGE_INVALID )
     {
        printf("Invalid age Please Enter Positive Age \n");

     }
     else
     {     
   printf("Your ticket price will be :%d Rupees \n",iRet);
     }
     
    return 0;

}
  