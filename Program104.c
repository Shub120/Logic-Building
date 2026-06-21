#include <stdio.h>

void Display(int *ptr)
{
  printf("value of iptr: %d \n",ptr);
    
}

int main ()
{
    int Arr[5]={10,20,30,40,50};

   printf("Base adress of Ar:%d \n",Arr);

    Display(Arr);

    return 0;
}