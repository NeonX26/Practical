# # Single Inheritance
# class Person:
#     def fuct1(p):
#         print("This function is of parent class")

# class Child(Person):
#     def funct2(p):
#         print("This function is of Child class")

# obj = Child()
# obj.fuct1()
# obj.funct2()

# Multiple Inheritance
# class Animal:
#     def func1(s):
#         print("This is Animal class")

# class Bird:
#     def func2(b):
#         print("This is  Bird class")
        
# class Eagle(Animal,Bird):
#     def func3(e):
#         print("This is Eagle class")

# Eagle_Obj = Eagle()
# Eagle_Obj.func1()
# Eagle_Obj.func2()
# Eagle_Obj.func3()

# Parent class
class Vehicle:
    def __init__(self, name, color):
        self.name = name
        self.color = color

    def display(self):
        print(f"This is a {self.color} {self.name}")

# First sub-class
class Car(Vehicle):
    def __init__(self, name, color, num_doors):
        super().__init__(name, color)
        self.num_doors = num_doors

    def display_doors(self):
        print(f"This car has {self.num_doors} doors")

# Second sub-class
class Bike(Vehicle):
    def __init__(self, name, color, num_wheels):
        super().__init__(name, color)
        self.num_wheels = num_wheels

    def display_wheels(self):
        print(f"This bike has {self.num_wheels} wheels")

# Creating objects
car = Car("Tesla", "Red", 4)
bike = Bike("Honda", "Blue", 2)

# Calling methods
car.display()
car.display_doors()

bike.display()
bike.display_wheels()