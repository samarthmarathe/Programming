import java.util.*;

class StringX
{
    public void Display(String str)
    {
        System.out.println("Received String is: "+str);
    }
}

class program268
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String str = null;

        System.out.println("Enter string: ");
        str = sobj.nextLine();
        
        program280 strobj = new program280();
        strobj.Display(str);
    }    
}
