import java.util.*;

class Program140
{
    public static void main (String A[])
    {
        Scanner sobj= new Scanner (System.in);
        
        int Arr[]={10,20,30,40,50};


        //Bad Programming practice
        for (iCnt=0;iCnt<Arr.length;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

        System.out.println(iCnt);  //Error
           

    }
}