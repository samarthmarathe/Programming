class Demo:
    # Class Variable
    Value1 = 10
    Value2 = 20

    def __init__(self):
        self.No1 = 11           # Instance Variable
        self.No2 = 21           # Instance Variable

    # Instance method
    def fun(self):
        print("Inside instance method named as fun")
        print(self.No1)
        print(self.No2)
        print(Demo.Value1)
        print(Demo.Value2)

    @classmethod
    def gun(cls):
        print("Inside instance method named as gun")
        #print(cls.No1)        Not Allowed
        #print(cls.No2)        Not Allowed
        print(cls.Value1)
        print(cls.Value2)

# Call with Object
dobj = Demo()
dobj.gun()