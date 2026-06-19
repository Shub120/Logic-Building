import java.util.*;

class DigitalX
{
    public void DisplayDigits(int iNo)
    {
        int iDigital=0;

        for (;iNo!=0;)  //for(;;)
        {
            iDigital = iNo % 10;
            System.out.println(iDigital);
            iNo = iNo / 10;
        }
    }
}

class Program81
{
    public static void main (String a[])
    {
        Scanner Sobj = new Scanner(System.in);
        DigitalX dobj= new DigitalX();

        int iValue=0;

        System.out.println("Enter number: ");
        iValue=Sobj.nextInt();

        dobj.DisplayDigits(iValue);
    }
}