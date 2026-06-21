#include <stdio.h>

void display (int *iptr)
{
    printf("%d",*iptr);

    iptr++;

    printf("%d",*iptr);
    iptr++;

    printf("%d",*iptr);
}

int main ()
{
    int Arr[5]={10,20,30,40,50};

    display(Arr);

    return 0;
}