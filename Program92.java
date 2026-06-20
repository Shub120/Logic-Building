import java.util.*;

class DigitX
{
    public int SumDigits(int iNo)
    {
        
       int iDigit=0;
       int iRev=0;

       while(iNo !=0)
       {
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;
       }
       return iRev;

    }
}
class Program92
{
    public static void main (String a[])
    {
        Scanner sobj =new Scanner(String.in);
        DigitX dobj=new DigitX();

        int iValue=0;
        int iRet=0;

        System.out.println("Enter the number:");
        iValue=sobj.nextInt();

        int iValue=0;
        int iRet=0;

        system.out.println("Enter the number: ");
        iValue=sobj.nextInt();

        iRet=dobj.SumDigits(iValue);

        System.out.println("Reversed number is: "+iRet);
    }
}