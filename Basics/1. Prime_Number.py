import math

def is_prime_pythonic(number):
    if number < 2:
        return False
    elif number == 2:
        return True
    else:
        for i in range(3, int(math.sqrt(number)) + 1, 2):
            if number % i == 0:
                return False
        return True

if __name__ == "__main__":
    num = int(input("Enter a number: "))
    if is_prime_pythonic(num):
        print(f"Number {num} is prime")
    else:
        print(f"Number {num} is not prime")