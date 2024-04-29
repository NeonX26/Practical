try:
    # This will raise a ZeroDivisionError
    result = 1 / 0
except ZeroDivisionError as e:
    print("Caught an exception: ", e)
finally:
    print("This will always run")

try:
    # This will raise a custom exception
    raise ValueError("This is a custom exception")
except ValueError as e:
    print("Caught a ValueError: ", e)
except Exception as e:
    print("Caught an exception: ", e)
finally:
    print("This will always run")

print("Program continues...")