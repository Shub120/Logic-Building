/*
start
  Accept number as no
  if no is compleatly divisible by 2
   Then print eveen 
  Otherwise 
  Print odd


stop

Start 
Accept number as no
divide no by 2
  if remender is 0 then 
    print as even 
    
    otherwise 
    print as odd

stop    
*/

#include<stdio.h>

int main ()
{
    int iValue = 0;
    int iRemender = 0 ;

     printf("enter number");
     scanf("%d",&iValue);

     iRemender=iValue % 2;

     if (iRemender== 0)
     {
        printf("number is even ");

     } 
     else{
        printf("number is odd");
     }



    return 0;

}
