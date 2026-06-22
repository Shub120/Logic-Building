#include <stdio.h>

void display (int Arr[])
{
    int iCnt =0;

    for (iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main ()
{
    int brr[8]={10,20,30,40,50,60,70,80};

    display(brr);

    return 0;
}