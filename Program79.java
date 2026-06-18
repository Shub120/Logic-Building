import java.util.*;

class DigitalX
{
    public void Display(int iNo)
    {
        int iDigital=0;

        while(iNo !=0)
        {
            iDigital = iNo % 10;
            System.out.println(iDigital);
            iNo = iNo / 10;
        }
    }
}

class Program79
{
    public static void main (String a[])
    {
        Scanner Sobj = new Scanner(System.in);
        DigitalX dobj= new DigitalX();

        int iValue=0;

        System.out.println("Enter number: ");
        iValue=Sobj.nextInt();

        dobj.Display(iValue);
    }
}