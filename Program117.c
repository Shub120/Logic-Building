#include <stdio.h>

void display (int Arr[],int iSize)
{
    int iCnt =0;

    for (iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main ()
{
    int iLength=4;
    int iCnt=0;

    int brr[iLength];

    printf("Enter the elements  :\n");

    for (iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&brr[iCnt]);
    }

    display(brr,4);

    return 0;
}