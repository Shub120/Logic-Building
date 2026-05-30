// type 2
import java.util.Scanner;

void CheckDivVisible (int iNo)
{
    if ((iNo % 3 ==0)&&(iNo % 5 ==0))
    {
        System.out.println(" Number is divisible by 3 & 5 ");
    }
    else
    {
        System.out.println("Number is not divisible by 3 & 5 ");
    }
}

class Program40
{
    public static void main (String a[])
    {
        Scanner sobj=new Scanner(Syetem.in);
        int iValue = 0;

        System.out.println("Enter number: ");
        iValue= sobj.nextInt;

        CheckDivVisible(iValue);       // Error

    }
}