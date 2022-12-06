a=1
b=2.3
c=a+b
print(a,"+",b,"=",c)
print(type(a),type(b),type(c))

def text_length(x):
    print("The length of", x, "is", len(x))

text_length("Test String")
text_length([90, 32, 12, 9])

def cal(x, y):
    return x+y , x-y

add, subtract = cal(3.5,2.3)
print(add, subtract)

import tkinter
print("The version of tkinter is",tkinter.TkVersion)

