#include <stdio.h>
#include <stdlib.h>

int main ()
{
   int *brr =NULL;
   int iLength=0;
   int iCnt=0;

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

    //step5: Deallocate the memory
    free (brr);


    return 0;
}