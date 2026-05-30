import java.util.*;

class Program36
{
    public static void main (String a[])
    {
        Scanner sobj= new Scanner (System.in);

        String sName =null;
        int iAge=0;
        float fMarks=0.0f;

        System.out.println("Enter the name:  ");

        sName=sobj.nextLine();

        System.out.println("Enter the Age :  ");
        iAge= sobj.nextInt();
        
        System.out.println("Enter Your Marks: ");

        fMarks=sobj.nextFloat();

        System.out.println("Name :" +sName);
        System.out.println("Age: "+iAge);
        System.out.println("Marks: "+fMarks);
        
    }
}