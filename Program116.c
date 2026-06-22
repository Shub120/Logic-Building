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

    int brr[iLength];

    brr[0]=10;
    brr[1]=20;
    brr[2]=30;
    brr[3]=40;

    display(brr,4);

    return 0;
}