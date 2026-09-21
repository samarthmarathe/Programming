import java.util.*;
import Marvellous.StringX;

class program277
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;

        System.out.println("Enter string: ");
        data = sobj.nextLine();
        
        program280 strobj = new program280();    

        int iRet = 0;

        iRet = strobj.CountCapital(data);

        System.out.println("Number of Capital Characters: "+iRet);

        iRet = strobj.CountSmall(data);

        System.out.println("Number of Small Characters: "+iRet);

        iRet = strobj.CountDigits(data);

        System.out.println("Number of Digits are: "+iRet);

        iRet = strobj.CountSpace(data);

        System.out.println("Number of Spaces are: "+iRet);

        iRet = strobj.CountSpecial(data);

        System.out.println("Number of Special Symbols are: "+iRet);
    }    
}
