import java.util.Scanner;

class NumberX
{
    public boolean CheckPrime(int iNo)
    {
        int iCnt = 0;
        for(iCNt=2;iCnt<=(iNo/2);iCnt++)
        {
            if ((iNo%iCNt)==0)
            {
                break;
            }
        }
        if(iCnt>(iNo/2))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program65
{
    public static void main (String args[])
    {
        Scanner sobj =new Scanner(System.in);

        int iValue=0;
        boolean bRet=false;

        System.out.println("Enter the number:");
        iValue=sobj.nextInt();

        NumberX nobj = new NumberX();

        bRet=nobj.CheckPrime(iValue);

        if(bRet===true)
        {
            System.out.println("Its a prime");
        }
        else
        {
            System.out.println("Its not a prime ");
        }

    }
}