#include <stdio.h>

void display (int Arr[])
{
    printf("%d\n",*Arr);
    Arr++;

    printf("%d\n",Arr);
    Arr++;

    printf("%d\n",Arr);
}

int main ()
{
    int brr[5]={10,20,30,40,50};

    display(brr);

    return 0;
}