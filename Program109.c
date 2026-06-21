#include <stdio.h>

void display (int Arr[])
{
    printf("%d",Arr[0]);
     printf("%d",Arr[1]);
      printf("%d",Arr[2]);
       printf("%d",Arr[3]);
        printf("%d",Arr[4]);
}

int main ()
{
    int brr[5]={10,20,30,40,50};

    display(brr);

    return 0;
}