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
    int brr[4]={10,20,30,40};

    display(brr,4);

    return 0;
}