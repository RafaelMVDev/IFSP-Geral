anterior = 0
posterior = 1

for i in range(0,16):
    print(posterior, end = ',')
    anterior,posterior  = posterior, posterior + anterior