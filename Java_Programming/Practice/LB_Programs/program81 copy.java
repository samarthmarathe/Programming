import java.util.*;

class program81copy
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;

        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();

        dobj.DisplayDigits(iValue);
    }
}

class DigitX
{
    public void DisplayDigits(int iNo)
    {
        int iDigit = 0;

        for(iDigit = iNo; iNo > 0; iDigit = iNo)
        {
            iDigit = iNo % 10;
            System.out.print(iDigit);
            iNo =iNo/10;
        }
    }
}