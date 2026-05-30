#include<stdio.h>
void Display(int INO)
{
    int iCnt=0;
    
    if (INO <0)
    {
     printf("Invalid input \n");
     return;   
    } 
    for(iCnt=INO;iCnt>=0;iCnt --)
    {
    printf("%d \n   ",iCnt);
     }     

}

int main ()
{
   
   int iValue=0;
   

   printf("Enter the Frequency: ");
   scanf("%d",&iValue);

   Display(iValue);
   
         
    return 0;

}
  
