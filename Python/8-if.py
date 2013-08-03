#! -*- coding: utf-8 -*-

a = 23
b = 12


if __name__ == "__main__":
    print(a < b)
    print(a > b)
    print("Does %d lie between 20 to 200" % a)
    print(20 < a < 200)
    print("Compare strings")
    print("python" > "java")
    if a > b:
        print("a is greater than b")
    else:
        print("b is greater than a")
    lang = "python"

    if lang.upper() == "PYTHON":
        print("PYTHON == PYTHON")
