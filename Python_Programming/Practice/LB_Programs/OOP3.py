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
        #print(Demo.No1)
        #print(Demo.No2)
        print(Demo.Value1)
        print(Demo.Value2)

# Call without Object
Demo.gun()