def primo(a):
    if a == 2:
      return True
    elif a % 2 == 0:
       return False
    else:
        b = 3
        while b < a:
            if b % a == 0:
                break
            else:
               b += 2

        if  b == a:
            return True
        else:
            return False

x = int(input("Dê o valor de a: "))

print(primo(x))