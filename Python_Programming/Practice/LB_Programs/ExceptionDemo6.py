def main():

    Ans = 0;

    try:
        print("Enter First Number:")
        No1 = int(input())

        print("Enter second Number:")
        No2 = int(input())

        Ans = No1/No2

        print("Division is successful")

    except ZeroDivisionError as zobj:
        print("Exception occured due to second operant is zero: ",zobj)

    except ValueError as vobj:
        print("Exception occured due to invalid data type: ",vobj)

    except Exception as eobj:
        print("Exception occured",eobj)

    finally:
        print("Inside finally block")

    print("Result is : ",Ans)
    
if __name__ == "__main__":
    main()