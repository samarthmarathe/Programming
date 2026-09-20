import java.util.*;

class StringX
{
    public int CountCapital(String str)
    {
        int iCount = 0, i = 0;
        
        for(i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) >= 'A' && str.charAt(i) <= 'Z')
            {
                iCount++;
            }
        }
        return iCount;
    }

    public int CountSmall(String str)
    {
        int iCount = 0, i = 0;
        
        for(i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) >= 'a' && str.charAt(i) <= 'z')
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class program271
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;

        System.out.println("Enter string: ");
        data = sobj.nextLine();
        
        StringX strobj = new StringX();

        int iRet = 0;

        iRet = strobj.CountCapital(data);

        System.out.println("Number of Capital Characters: "+iRet);

        iRet = strobj.CountSmall(data);

        System.out.println("Number of Small Characters: "+iRet);
    }    
}
