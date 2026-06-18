import java.util.*;

class DigitalX
{
    public void Display(int iNo)
    {
         while(iNo !=0)
        {
            
            System.out.println(iNo % 10);
            iNo = iNo / 10;
        }
    }
}

class Program80
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