#include <stdio.h>

void display (int iptr[])
{
    printf("%d\n",*iptr);
    iptr++;

    printf("%d\n",*iptr);
    iptr++;

    printf("%d\n",*iptr);
}

int main ()
{
    int Arr[5]={10,20,30,40,50};

    display(Arr);

    return 0;
}