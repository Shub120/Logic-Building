#include <stdio.h>

void CallByAddress(int *iNo)
{
    (*iNo)++;
    
}

int main ()
{
    int iValue=11;

    CallByAddress(&iValue);

    printf("Value after function call: %d \n",iValue);

    return 0;
}