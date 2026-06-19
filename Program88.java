imoprt java.util.*;

class DigitX
{
    public int CountDigits(int iNo)
    {
        int iDigit=0;
        int iEvenCount=0;
        int ioddCount=0;

        while(iNo !=0)
        {
            iDigit = iNo % 10;
            if (iDigit%2==0)
            {
                iEvenCount++;
            }
            else
            {
                ioddCount++;
            }
            iNo = iNo / 10;
        }
        System.out.println("NUmber of even digits: "+iEvenCount);
        System.out.println("Number of odd digits: "+ioddCount);
        

    }
}

class Program88
{
    public static void main (String a[])
    {
        public static void main (STring a[])
        {
            Scanner sobj=new Scanner (System.in );
            DigitX dobj=new DigitX();

            int iValue=0;

            System.out.println("Enter the number :");
            iValue=sobj.nextInt();

            dobj.CountDigits(iValue);

            
        }
       
    }
}