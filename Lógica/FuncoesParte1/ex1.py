
from  math import *

def func2(a,b,c):
    delta = b**2 - 4*a*c
    if delta < 0:
        print("Delta negativo! Resultado nos números complexos")
    else:
        x1 = (-b + sqrt(delta)) / 2 * a
        x2 = (-b - sqrt(delta)) / 2 * a
        print(f"x1 = {x1}, x2 = {x2}")


print(func2(1,2,-15))