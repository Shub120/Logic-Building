#include <stdio.h>
#include <stdlib.h>

int  Summation(int Arr[],int iSize)
{
    int iCnt=0;
    int iSum=0;

    printf("Elements of array are: \n "); 

    for (iCnt=0; iCnt < iSize; iCnt++)
    {
        iSum=iSum+Arr[iCnt];

    }
    return iSum;
}

int main ()
{
   int *brr =NULL;
   int iLength=0;
   int iCnt=0;
   int iRet=0;

   //Step1 : Accept number of elements :
   printf("Enter the number of elemets: \n");
    scanf("%d",&iLength);

    //step2: Allocate the memory
    brr=(int*)malloc(iLength*sizeof(int));

    // Step3: Accept the values from user
    for (iCnt=0; iCnt<iLength;iCnt++)
    {
        scanf("%d",&brr[iCnt]);
    }

    //step4: Use the Memory {logic}
    iRet =Summation (brr,iLength);

    printf("Addition is: %d \n",iRet);

    //step5: Deallocate the memory
    free (brr);


    return 0;
}