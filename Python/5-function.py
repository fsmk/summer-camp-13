#! -*- coding: utf-8 -*-


def square(no):
    return no * no


def new_print(msg):
    print(msg)


if __name__ == "__main__":
    print("Square")
    result = square(2)
    print(result)
    print(square(2))
    sum_of_squares = square(2) + square(2)
    print("Sum of squares")
    print(sum_of_squares)
    print("Cube")
    print(square(3) * 3)
    print("Function without return value")
    new_print("I am not returning value")
    print(new_print("I am not returning value"))
