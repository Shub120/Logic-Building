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
    int brr[5]={10,20,30,40,50};

    display(brr);

    return 0;
}