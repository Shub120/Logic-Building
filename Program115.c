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

    int brr[iLength]={10,20,30,40};  //Error

    display(brr,4);

    return 0;
}