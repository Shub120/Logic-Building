import java.util.Scanner;

class NumberX
{
    public boolean CheckPerfect(int ino )
    {
        int iCnt =0;
        int iSum =0;

        for (iCnt=1;iCnt <= (ino / 2); iCnt++)
        {
            if ((ino %iCnt) == 0)
            {
            iSum = iSum+iCnt;
            }

        }
         if (iSum ==ino)
    {
        return true;
    }
    else
    {
        return false;
    }

    }
   

}

class Program50
{
    public static void main (String A[])
    {
        Scanner sobj = new Scanner (System.in);

        int iValue =0;
        boolean bRet =false;

        System.out.println("Enter the number :");
        iValue= sobj.nextInt();

        NumberX nobj =new NumberX();

        bRet = nobj.CheckPrefect(iValue);

        if(bRet == true)
        {
            System.out.println("Its prefect");
        }
        else
        {
            System.out.println("Its not Prefect");
        }

    }
}